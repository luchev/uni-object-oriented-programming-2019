#include <cstring>
#include "Person.h"


Person::Person(char Gender, const char * Name) : gender(Gender)
{
	// Make sure to initialize all the variables
	setName(Name);
	setBirthDate(0, 0, 0);
}

Person::Person(char Gender, int Year, int Month, int Day) : gender(Gender)
{
	// Make sure to initialize all the variables
	setName("");
	setBirthDate(Year, Month, Day);
}

Person::Person(char Gender, const char * Name, int Year, int Month, int Day) : gender(Gender)
{
	// Make sure to initialize all the variables
	setName(Name);
	setBirthDate(Year, Month, Day);
}

Person::~Person()
{
	// Delete only memory allocated on the heap
	delete[] name;
	delete[] birthDate;
}

const char * Person::getName() const
{
	return name;
}

char Person::getGender() const
{
	return gender;
}

size_t Person::getBirthDate() const
{
	size_t fullDate = birthDate[0]; // year
	fullDate *= 100; // move left by two digits
	fullDate += birthDate[1]; // add the month
	fullDate *= 100; // move left by two digits
	fullDate += birthDate[2];
	return fullDate;
}

void Person::setBirthDate(int Year, int Month, int Day)
{
	// Executed only the first time the date is initialized
	// Every next time the date is modified this is skipped
	if (birthDate == nullptr) {
		birthDate = new int[3];
	}
	birthDate[0] = Year;
	birthDate[1] = Month;
	birthDate[2] = Day;
}

void Person::setName(const char * Name)
{
	if (name != nullptr) { // If the name is already set
		delete[] name; // delete it
	}
	// Create new array of chars for the name with size equal
	// that of the given Name parameter
	name = new char[strlen(Name) + 1];
	// Copy the contents of Name to this->name
	strcpy(name, Name);
}
