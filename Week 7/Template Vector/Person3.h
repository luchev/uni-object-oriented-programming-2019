#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person3 {
private:
	char * name;
	int age;
	static int staticId;
	int personId;
public:
	Person3(const char * Name = "", int Age = 0);
	~Person3();
	Person3(const Person3& other);
	Person3& operator=(const Person3& other);

	const char * getName() const;
	int getAge() const;
	int getId() const;
	void setName(const char * Name);
	void setAge(int Age);

	Person3 & operator++();
	Person3 operator++(int);
	friend std::istream & operator>>(std::istream & in, Person3& Person3);
	friend std::ostream & operator<<(std::ostream & out, const Person3& Person3);
	bool operator<(const Person3 & other) const;
	bool operator>(const Person3 & other) const;
	bool operator<=(const Person3 & other) const;
	bool operator>=(const Person3 & other) const;
	bool operator==(const Person3 & other) const;
	bool operator!=(const Person3 & other) const;
};

// int Person3::id = 1; - NOT HERE

#endif
