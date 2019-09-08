#include "Assistant.h"
#include "Student.h"
#include <iostream>

int main() {
    Student p("Peter", 1111);
    Assistant t("Peter again", 1111, 5);
    std::cout << "FN: " << p.getFN() << " Name:"<< p.getName() << "\n";
    std::cout << "FN: " << t.getFN() << " Name:"<< t.getName() << " Course:" << t.getCourse() <<"\n";
    
    return 0;
}