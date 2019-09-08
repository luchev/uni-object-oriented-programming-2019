#include <iostream>

#include "Person.h"

void TestPerson() {
	Person a("One", 10);
	Person b("Two", 20);
	std::cout << a++;
	std::cout << ++a;
	std::cout << (a < b);
	std::cout << (a > b);
	std::cout << (a <= b);
	std::cout << (a >= b);
	std::cout << (a == b);
	std::cout << (a != b);
}

int main() {
	TestPerson();
	
	return 0;
}