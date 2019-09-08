// This code goes at the top of the cpp file
#define _CRTDBG_MAP_ALLOC
#include <cstdlib> // Include necessary libraries for debugging
#include <crtdbg.h> // Ditto
#ifdef _DEBUG // If the program is executed in debug mode (can be changed in VS to Release/Debug)
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ ) // define new to be debug new
#endif // Debug new shows in which file and on which line the memory leak happened

#include <iostream>
#include "Person.h"

int main() {
	// DEBUG LINE
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	// END OF DEBUG LINE

	Person betty("Betty");
	Person mark(betty); // copy constructor
	mark.setName("Mark");
	Person bob("");
	bob = mark; // operator=
	bob.setName("Bob");

	std::cout << "Betty = " << betty.getName() << std::endl;
	std::cout << "Mark = " << mark.getName() << std::endl;
	std::cout << "Bob = " << bob.getName() << std::endl;

	return 0;
}