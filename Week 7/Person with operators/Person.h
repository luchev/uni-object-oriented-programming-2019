#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person {
private:
	char * name;
	int age;
public:
	Person(const char * Name = "", int Age = 0);
	~Person();
	Person(const Person& other);
	Person& operator=(const Person& other);

	const char * getName() const;
	int getAge() const;
	void setName(const char * Name);
	void setAge(int Age);

	Person & operator++();
	Person operator++(int);
	friend std::istream & operator>>(std::istream & in, Person& Person);
	friend std::ostream & operator<<(std::ostream & out, const Person& Person);
	bool operator<(const Person & other) const;
	bool operator>(const Person & other) const;
	bool operator<=(const Person & other) const;
	bool operator>=(const Person & other) const;
	bool operator==(const Person & other) const;
	bool operator!=(const Person & other) const;
};

#endif
