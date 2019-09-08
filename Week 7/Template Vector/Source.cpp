#include <iostream>

#include "VectorT.hpp"

int main() {
	VectorT<char> vectChar;
	vectChar.AddToEnd('a');
	vectChar.AddToEnd('b');
	vectChar.AddToEnd('c');
	
	// Prints "abc"
	for (int i = 0; i < vectChar.GetSize(); i++) {
		std::cout << vectChar.GetAtIndex(i);
	}
	
	VectorT<Person3> vectPerson;
	vectPerson.AddToEnd({ "Bob" });
	std::cout << vectPerson.GetAtIndex(0); // Prints info for Bob
	std::cout << vectPerson.GetAtIndex(1); // prints default Person()

	return 0;
}