#include "Vector.h"

Vector::Vector(size_t Capacity) : capacity(Capacity), currentEmpty(0)
{
	data = new int[Capacity];
}

Vector::~Vector()
{
	delete[] data;
}

Vector::Vector(const Vector& CopyFrom) : capacity(CopyFrom.capacity), currentEmpty(CopyFrom.currentEmpty)
{
	data = new int[capacity];
	for (size_t i = 0; i < currentEmpty; i++) {
		data[i] = CopyFrom.data[i];
	}
}

Vector& Vector::operator=(const Vector& CopyFrom)
{
	if (this != &CopyFrom) {
		delete[] data;
		
		capacity = CopyFrom.capacity;
		currentEmpty = CopyFrom.currentEmpty;

		data = new int[capacity];
		for (size_t i = 0; i < currentEmpty; i++) {
			data[i] = CopyFrom.data[i];
		}
	}
	return *this;
}

bool Vector::IsValidIndex(size_t Index)
{
	return Index < currentEmpty;
}

bool Vector::IsEmpty()
{
	return currentEmpty == 0;
}

void Vector::copyData(int * From, int * To, size_t Count)
{
	for (size_t i = 0; i < Count; i++) {
		To[i] = From[i];
	}
}

bool Vector::increaseCapacity(size_t NewCapacity)
{
	if (NewCapacity <= currentEmpty) {
		return false; // Failed to resize
	}

	if (NewCapacity == SIZE_MAX) {
		NewCapacity = capacity << 1;
		if (NewCapacity == 0) {
			NewCapacity = 1;
		}
	}

	capacity = NewCapacity;
	int* newData = new int[capacity];
	copyData(data, newData, currentEmpty);
	delete[] data;
	data = newData;

	return true;
}

bool Vector::decreaseCapacity(size_t NewCapacity)
{
	if (NewCapacity < currentEmpty) {
		return false; // Failed to resize, requested capacity is too small
	}

	if (NewCapacity == SIZE_MAX) {
		NewCapacity = capacity >> 1;
		if (NewCapacity < currentEmpty) {
			return false; // Failed to resize, cannot reduce the size twice
		}
	}

	capacity = NewCapacity;
	int* newData = new int[capacity];
	copyData(data, newData, currentEmpty);
	delete[] data;
	data = newData;

	return true;
}

bool Vector::IsFull()
{
	return currentEmpty >= capacity;
}


void Vector::AddToEnd(int Number)
{
	if (IsFull()) {
		increaseCapacity();
	}

	data[currentEmpty] = Number;
	currentEmpty++;
}

void Vector::RemoveFromEnd()
{
	if (IsEmpty()) {
		return;
	}

	currentEmpty--;
	decreaseCapacity();
}

int Vector::GetAtIndex(size_t Index)
{
	if (IsValidIndex(Index)) {
		return data[Index];
	}
	else {
		std::cout << "Trying to access invalid position.\n";
		return -1;
	}
}

size_t Vector::GetSize()
{
	return currentEmpty;
}
