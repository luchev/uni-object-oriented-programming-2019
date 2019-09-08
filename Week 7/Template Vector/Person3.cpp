#include "Person3.h"
#include <cstring>

Person3::Person3(const char * Name, int Age) : name(nullptr), age(Age) {
	setName(Name);
	personId = staticId++;
}

Person3::~Person3() {
	delete[] name;
}

Person3::Person3(const Person3& other) : name(nullptr), age(other.age) {
	setName(other.name);
	personId = staticId++;
}

Person3& Person3::operator=(const Person3& other) {
	if (this != &other) {
		age = other.age;
		setName(other.name);
	}
	return *this;
	personId = staticId++;
}

const char * Person3::getName() const {
	return name;
}

void Person3::setName(const char * Name) {
	delete[] name;
	int length = strlen(Name);
	name = new char[length + 1];
	strcpy(name, Name);
}

int Person3::getAge() const {
	return age;
}

int Person3::getId() const
{
	return personId;
}

void Person3::setAge(int Age) {
	age = Age;
}

Person3 & Person3::operator++() {
	++age;
	return *this;
}

Person3 Person3::operator++(int) {
	Person3 copy(*this);
	++(*this);
	return copy;
}

bool Person3::operator<(const Person3 & other) const
{
	return age < other.age;
}

bool Person3::operator>(const Person3 & other) const
{
	return other < *this;
}

bool Person3::operator<=(const Person3 & other) const
{
	return !(*this > other);
}

bool Person3::operator>=(const Person3 & other) const
{
	return !(*this < other);
}

bool Person3::operator==(const Person3 & other) const
{
	return age == other.age;
}

bool Person3::operator!=(const Person3 & other) const
{
	return !(*this == other);
}

std::istream & operator>>(std::istream & in, Person3& Person3) {
	char buffer[1000];
	in >> buffer;
	Person3.setName(buffer);
	in >> Person3.age;
	return in;
}
std::ostream & operator<<(std::ostream & out, const Person3& Person3) {
	out << "Name: " << Person3.name << "\n";
	out << "Age: " << Person3.age << "\n";
	out << "Id: " << Person3.getId() << "\n";
	return out;
}

int Person3::staticId = 0;