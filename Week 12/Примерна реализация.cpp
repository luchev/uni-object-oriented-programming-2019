#include <iostream>

class PC {
public:
    virtual void print() const {
        std::cout << "Speed: " << Speed << "\n";
    }
    PC(int speed) {
        Speed = speed;
    }
    virtual ~PC() { // Try making this NON virtual
        std::cout << "Destroying PC\n";
    }
private:
    int Speed;
};

class Laptop : public PC {
public:
    virtual void print() const override {
        PC::print();
        std::cout << "Battery: " << Battery << "\n";
    }
    void printBattery() const {
        std::cout << "ONLY Battery: " << Battery << "\n";
    }
    Laptop(int speed, int battery) : PC(speed) {
        Battery = battery;
    }
    ~Laptop() {
        std::cout << "Destroying Laptop\n";
    }
private:
    int Battery;
};

class MyComputer {
public:
    void print() const {
        computer->print();
    }
    void printBatteryIfAvailable() const {
        Laptop * castToLaptop = dynamic_cast<Laptop*>(computer);
        if (castToLaptop != nullptr) { // Cast successful
            castToLaptop->printBattery();
        }
        else { // Failed to cast to Laptop -> it's a PC
            std::cout << "PC has no battery\n";
        }
    }
    MyComputer(PC * pointer) {
        computer = pointer;
    }
private:
    PC * computer;
};

int main() {
    std::cout << "Section 1\n\n";
    PC * pc = new PC(1000);
    PC * laptop = new Laptop(40000, 2);
    pc->print();
    std::cout << "\n";
    laptop->print();

    std::cout << "\nSection 2\n\n";
    MyComputer computer1(pc);
    computer1.printBatteryIfAvailable();
    std::cout << "\n";
    MyComputer computer2(laptop);
    computer2.printBatteryIfAvailable();
    std::cout << "\n";

    std::cout << "Free the PC\n";
    delete pc; // Try removing this line

    std::cout << "\nFree the Laptop\n";
    delete laptop; // Try removing this line
}