#include "Person2.h"

Person2::Person2() : name(""), age(0)
{
}

Person2::Person2(Name NewName) : name(NewName), age(0)
{
}

Person2::Person2(Name NewName, int Age) : name(NewName), age(Age)
{
}

//Person2::Person2(const Person2 & CopyFrom) : name(CopyFrom.name), age(CopyFrom.age)
//{
//}
//
//Person2 & Person2::operator=(const Person2 & CopyFrom)
//{
//	if (this != &CopyFrom) {
//		name = CopyFrom.name;
//		age = CopyFrom.age;
//	}
//	return *this;
//}

Person2::~Person2()
{

}

const char * Person2::GetName() const
{
	return name.Get();
}

void Person2::SetName(const char * NewName)
{
	name = NewName;
}

int Person2::GetAge() const
{
	return age;
}

void Person2::SetAge(int NewAge)
{
	age = NewAge;
}
