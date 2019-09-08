#pragma once

class Name {
private:
	// Fields
	char * name;
	int length;
public:
	// Default constructor
	Name();
	// Constructor with 1 parameter
	Name(const char * String);
	// Destructor
	~Name();
	// Copy constructor
	Name(const Name & CopyFrom);
	// operator=
	Name& operator=(const Name & CopyFrom);

	// Getters
	const char * Get() const;
	int GetLength() const;
	// Setters
	void Set(const char * String);
};

int StringLength(const char * String);
void StringCopy(char * To, const char * From);