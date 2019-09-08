#pragma once

class Person {
private:
	const char gender = 'X';
	char * name = nullptr;
	int * birthDate = nullptr;
public:
	// Constructors
	Person(char Gender, const char * Name);
	Person(char Gender, int Year = 0, int Month = 0, int Day = 0);
	Person(char Gender, const char * Name, int Year, int Month, int Day);
	const char * getName() const;
	//Destructor
	~Person();

	char getGender() const;
	size_t getBirthDate() const;
	void setBirthDate(int Year = 0, int Month = 0, int Day = 0);
	void setName(const char * Name);
};