// This code goes at the top of the cpp file
#define _CRTDBG_MAP_ALLOC
#include <cstdlib> // Include necessary libraries for debugging
#include <crtdbg.h> // Ditto
#ifdef _DEBUG // If the program is executed in debug mode (can be changed in VS to Release/Debug)
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ ) // define new to be debug new
#endif // Debug new shows in which file and on which line the memory leak happened

#include <iostream>
#include "Person2.h"

void TestName() {
	// Tests for Name

	Name mark("Mark");
	Name betty = "Betty";
	Name mark2(mark); // copy constructor
	mark2.Set("Mark 2");
	Name mark3 = betty; // copy constructor
	mark3 = mark2; // operator=
	mark3.Set("Mark 3");

	std::cout << "Mark = " << mark.Get() << std::endl;
	std::cout << "Betty = " << betty.Get() << std::endl;
	std::cout << "Mark 2 = " << mark2.Get() << std::endl;
	std::cout << "Mark 3 = " << mark3.Get() << std::endl;
}

void TestPerson2() {
	Person2 Mark("Mark", 59);
	Person2 Bob = Mark; // copy constructor
	Bob.SetAge(25);
	Bob.SetName("Bob");
	Person2 Hue;
	Hue = Bob; // operator=
	Hue.SetName("Hue");


	std::cout << "Mark = " << Mark.GetName() << std::endl;
	std::cout << "Mark is 59 = " << Mark.GetAge() << std::endl;
	std::cout << "Bob = " << Bob.GetName() << std::endl;
	std::cout << "Bob is 25 = " << Bob.GetAge() << std::endl;
	std::cout << "Hue = " << Hue.GetName() << std::endl;
	std::cout << "Hue is 25 = " << Hue.GetAge() << std::endl;
}

int main() {
	// DEBUG LINE
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	// END OF DEBUG LINE

	TestName();
	TestPerson2();
	
	return 0;
}