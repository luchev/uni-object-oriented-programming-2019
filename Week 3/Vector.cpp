#include <iostream>
#include <limits.h>

class Vector {
private: // It's not needed but I'm leaving it here for code readibility
	size_t capacity;
	size_t currentEmpty;
	int* data;

	bool IsValidIndex(size_t Index) {
		return Index < currentEmpty;
	}
public:

	Vector(size_t capacity = 0) {
		this->capacity = capacity;
		data = new int[capacity];
		currentEmpty = 0;
	}

	~Vector() {
		delete[] data;
	}

	bool IsEmpty() {
		return currentEmpty == 0;
	}

	bool IsFull() {
		return currentEmpty >= capacity;
	}

	void AddToEnd(int Number) {
		if (IsFull()) {
			std::cout << "The container is full. Please expand first\n";
		}
		else {
			data[currentEmpty] = Number;
			currentEmpty++;
		}
	}

	int GetAtPosition(size_t Position) {
		if (IsValidIndex(Position)) {
			return data[Position];
		}
		else {
			std::cout << "Trying to access invalid position.\n";
			return -1; // Return some value, -1 or 0 or INT_MAX, whatever you like
		}
	}

};

int main() {
	Vector s;
	std::cout << s.GetAtPosition(0) << std::endl;
}
