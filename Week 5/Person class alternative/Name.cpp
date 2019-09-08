#include "Name.h"

Name::Name() : length(0), name(nullptr)
{
}

Name::Name(const char * String)
{
	length = StringLength(String);
	name = new char[length + 1];
	StringCopy(name, String);
}

Name::~Name()
{
	delete[] name;
}

Name::Name(const Name & CopyFrom) : length(CopyFrom.length)
{
	name = new char[length + 1];
	StringCopy(name, CopyFrom.name);
}

Name & Name::operator=(const Name & CopyFrom)
{
	if (this != &CopyFrom) {
		delete[] name;
		length = CopyFrom.length;
		name = new char[length + 1];
		StringCopy(name, CopyFrom.name);
	}
	return *this;
}

const char * Name::Get() const
{
	return name;
}

int Name::GetLength() const
{
	return length;
}

void Name::Set(const char * String)
{
	delete[] name;
	length = StringLength(String);
	name = new char[length + 1];
	StringCopy(name, String);
}

int StringLength(const char * String)
{
	if (String == nullptr) {
		return 0;
	}
	int i = 0;
	while (String[i] != 0) {
		i++;
	}
	return i;
}

void StringCopy(char * To, const char * From)
{
	if (From == nullptr || To == nullptr) {
		return;
	}
	int i = 0;
	while (From[i] != 0) {
		To[i] = From[i];
		i++;
	}
	To[i] = From[i];
}
