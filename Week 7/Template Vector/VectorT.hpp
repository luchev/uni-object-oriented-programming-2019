#ifndef VECTORT_H
#define VECTORT_H

#include <iostream>
#include <limits.h>

template <class T>
class VectorT {
private:
	size_t capacity;
	size_t currentEmpty;
	T* data;

	bool IsValidIndex(size_t Index);
	bool IsEmpty();
	void copyData(T* From, T* To, size_t Count);
	bool increaseCapacity(size_t NewCapacity = SIZE_MAX);
	bool decreaseCapacity(size_t NewCapacity = SIZE_MAX);
public:
	VectorT(size_t Capcity = 0);
	~VectorT();
	VectorT(const VectorT<T> & CopyFrom);
	VectorT<T>& operator=(const VectorT<T>& CopyFrom);
	bool IsFull();
	void AddToEnd(const T & Number);
	void RemoveFromEnd();
	T GetAtIndex(size_t Index);
	size_t GetSize();
};

template <class T>
VectorT<T>::VectorT(size_t Capacity) : capacity(Capacity), currentEmpty(0)
{
	data = new T[Capacity];
}

template <class T>
VectorT<T>::~VectorT()
{
	delete[] data;
}
template <class T>
VectorT<T>::VectorT(const VectorT<T> & CopyFrom) : capacity(CopyFrom.capacity), currentEmpty(CopyFrom.currentEmpty)
{
	data = new T[capacity];
	for (size_t i = 0; i < currentEmpty; i++) {
		data[i] = CopyFrom.data[i];
	}
}

template <class T>
VectorT<T> & VectorT<T>::operator=(const VectorT<T>& CopyFrom)
{
	if (this != &CopyFrom) {
		delete[] data;

		capacity = CopyFrom.capacity;
		currentEmpty = CopyFrom.currentEmpty;

		data = new T[capacity];
		for (size_t i = 0; i < currentEmpty; i++) {
			data[i] = CopyFrom.data[i];
		}
	}
	return *this;
}

template <class T>
bool VectorT<T>::IsValidIndex(size_t Index)
{
	return Index < currentEmpty;
}

template <class T>
bool VectorT<T>::IsEmpty()
{
	return currentEmpty == 0;
}

template <class T>
void VectorT<T>::copyData(T * From, T * To, size_t Count)
{
	for (size_t i = 0; i < Count; i++) {
		To[i] = From[i];
	}
}

template <class T>
bool VectorT<T>::increaseCapacity(size_t NewCapacity)
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
	T* newData = new T[capacity];
	copyData(data, newData, currentEmpty);
	delete[] data;
	data = newData;

	return true;
}

template <class T>
bool VectorT<T>::decreaseCapacity(size_t NewCapacity)
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
	T* newData = new T[capacity];
	copyData(data, newData, currentEmpty);
	delete[] data;
	data = newData;

	return true;
}


template <class T>
bool VectorT<T>::IsFull()
{
	return currentEmpty >= capacity;
}

template <class T>
void VectorT<T>::AddToEnd(const T & Item)
{
	if (IsFull()) {
		increaseCapacity();
	}

	data[currentEmpty] = Item;
	currentEmpty++;
}

template <class T>
void VectorT<T>::RemoveFromEnd()
{
	if (IsEmpty()) {
		return;
	}

	currentEmpty--;
	decreaseCapacity();
}

template <class T>
T VectorT<T>::GetAtIndex(size_t Index)
{
	if (IsValidIndex(Index)) {
		return data[Index];
	}
	else {
		std::cout << "Trying to access invalid position.\n";
		return T(); // Not -1 but default object of type T
	}
}

template <class T>
size_t VectorT<T>::GetSize()
{
	return currentEmpty;
}

#endif // !VECTOR_H