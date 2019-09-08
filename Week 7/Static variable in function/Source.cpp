#include <iostream>

int StaticIncrement()
{
	static int i = 0;
	return i++;
}

int main() {
	std::cout << StaticIncrement(); // Prints 0
	std::cout << StaticIncrement(); // Prints 1
	std::cout << StaticIncrement(); // Prints 2

	return 0;
}