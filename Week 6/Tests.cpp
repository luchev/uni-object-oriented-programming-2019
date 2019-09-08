#include "Tests.h"

void printVector(Vector vect) {
	for (size_t i = 0; i < vect.GetSize(); i++) {
		std::cout << vect.GetAtIndex(i) << ", ";
	}
	std::cout << std::endl;
}

void TestVector() {
	Vector v1;
	v1.AddToEnd(0);
	printVector(v1);
	for (int i = 1; i < 5; i++) {
		v1.AddToEnd(i);
		printVector(v1);
	}
	for (int i = 0; i < 10; i++) {
		v1.RemoveFromEnd();
		printVector(v1);
	}
	v1.AddToEnd(0);
	v1.AddToEnd(1);
	printVector(v1);
	Vector v2(v1);
	printVector(v2);
	Vector v3;
	for (int i = 6; i < 12; i++) {
		v3.AddToEnd(i);
	}
	printVector(v3);
	v2 = v3;
	printVector(v2);
}
