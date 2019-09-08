#include "Person.h"
#include <cstring>

Person::Person(const char * Name, int Age) : name(nullptr), age(Age) {
	setName(Name);
}

Person::~Person() {
	delete[] name;
}

Person::Person(const Person& other) : name(nullptr), age(other.age) {
	setName(other.name);
}

Person& Person::operator=(const Person& other) {
	if (this != &other) {
		age = other.age;
		setName(other.name);
	}
	return *this;
}

const char * Person::getName() const {
	return name;
}

void Person::setName(const char * Name) {
	delete[] name;
	int length = strlen(Name);
	name = new char[length + 1];
	strcpy(name, Name);
}

int Person::getAge() const {
	return age;
}

void Person::setAge(int Age) {
	age = Age;
}

Person & Person::operator++() {
	++age;
	return *this;
}

Person Person::operator++(int) {
	Person copy(*this);
	++(*this);
	return copy;
}

bool Person::operator<(const Person & other) const
{
	return age < other.age;
}

bool Person::operator>(const Person & other) const
{
	return other < *this;
}

bool Person::operator<=(const Person & other) const
{
	return !(*this > other);
}

bool Person::operator>=(const Person & other) const
{
	return !(*this < other);
}

bool Person::operator==(const Person & other) const
{
	return age == other.age;
}

bool Person::operator!=(const Person & other) const
{
	return !(*this == other);
}

std::istream & operator>>(std::istream & in, Person& Person) {
	char buffer[1000];
	in >> buffer;
	Person.setName(buffer);
	in >> Person.age;
	return in;
}
std::ostream & operator<<(std::ostream & out, const Person& Person) {
	out << "Name: " << Person.name << "\n";
	out << "Age: " << Person.age << "\n";
	return out;
}
