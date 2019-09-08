#include <iostream>
#include <limits.h>

struct Vector {
	size_t capacity;
	size_t currentEmpty;
	int* data;

	void Create(size_t NewCapacity) {
		capacity = NewCapacity;
		data = new int[capacity];
		currentEmpty = 0;
	}

	void Destroy() {
		delete[] data;
		capacity = 0;
		currentEmpty = UINT_MAX;
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

	bool IsValidIndex(size_t Index) {
		return Index < currentEmpty;
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

	void SetAtPosition(size_t Position, int Value) {
		// TODO set the value at the given position
		// hint: Think what to do if the position is invalid
	}

	size_t Size() {
		// TODO return how much memory is being used right now
		// e.g if we have 2 ints then the size is 2
		// hint: Where is currentEmpty pointing?
	}

	size_t Capacity() {
		// TODO return the capacity of the allocated memory
		// hint: Are we storing this information already?
	}

	unsigned long long Sum() {
		// TODO sum all the integers we have
		// hint: for-loop?
	}

	bool Find(int What) {
		// TODO return the position where you first see What in the array
		// or return -1 if What is not found
	}

	void Print() {
		// TODO print all the integers being stored separated by a space
	}

	size_t Count(int What) {
		// TODO return how many times What occurs in the array
	}

	void InsertAtPosition(size_t Position, int Value) {
		// ADVANCED TASK
		// TODO insert a new Value in Position
		// All integers on Position and after it are moved one to the right
		// hint: Can we always insert? What about capacity?
	}
};

int main() {
	Vector s;
	s.Create(12);
	std::cout << s.GetAtPosition(12) << std::endl; // Invalid
	s.AddToEnd(2);
	std::cout << s.GetAtPosition(0) << std::endl;
	// TODO add more examples to understand how to work with methods
}
