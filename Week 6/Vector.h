#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <limits.h>

class Vector {
private:
	size_t capacity;
	size_t currentEmpty;
	int* data;

	bool IsValidIndex(size_t Index);
	bool IsEmpty();
	void copyData(int* From, int* To, size_t Count);
	bool increaseCapacity(size_t NewCapacity = SIZE_MAX);
	bool decreaseCapacity(size_t NewCapacity = SIZE_MAX);
public:
	Vector(size_t Capcity = 0);
	~Vector();
	Vector(const Vector& CopyFrom);
	Vector& operator=(const Vector& CopyFrom);
	bool IsFull();
	void AddToEnd(int Number);
	void RemoveFromEnd();
	int GetAtIndex(size_t Index);
	size_t GetSize();
};

#endif // !VECTOR_H