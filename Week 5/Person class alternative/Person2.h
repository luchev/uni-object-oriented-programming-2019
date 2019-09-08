#pragma once
#include "Name.h"

class Person2
{
private:
	Name name;
	int age;
public:
	Person2();
	Person2(Name NewName);
	Person2(Name NewName, int Age);
	//Person2(const Person2 & CopyFrom);
	//Person2 & operator=(const Person2 & CopyFrom);
	~Person2();

	const char * GetName() const;
	void SetName(const char *);
	int GetAge() const;
	void SetAge(int NewAge);

};

