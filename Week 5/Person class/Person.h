#pragma once

class Person {
private:
	char gender;
	char * name = nullptr;
	int * birthDate = nullptr;
public:
	// Constructors
	Person(const char * Name);
	Person(char Gender, const char * Name);
	Person(char Gender, int Year = 0, int Month = 0, int Day = 0);
	Person(char Gender, const char * Name, int Year, int Month, int Day);
	//Destructor
	~Person();

	// Copy constructor
	Person(const Person& otherPerson);
	// operator=
	Person& operator=(const Person& other);

	const char * getName() const;
	char getGender() const;
	size_t getBirthDate() const;
	void setBirthDate(int Year = 0, int Month = 0, int Day = 0);
	void setName(const char * Name);
};