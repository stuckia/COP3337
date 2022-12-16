#include "myVector.h"

//default constructor
template<typename T>myVector<T>::myVector() {
	capacity = 4;
	numOfElements = 0;
	vec = new T[capacity];
}

// constructor with defined capacity
template<typename T>myVector<T>::myVector(int cap) {
	capacity = cap;
	numOfElements = 0;
	vec = new T[capacity];
}

// copy constructor
template<typename T>myVector<T>::myVector(const myVector& vector) {
	capacity = vector.capacity;
	numOfElements = vector.numOfElements;
	vec = vector.vec;
}

// free myVector
template<typename T>myVector<T>::~myVector() {
	delete[] vec;
}

// insert given value to beginning of arrray, shift everything else down
template<typename T> void myVector<T>::insertBeg(T value) {
	for (int i = capacity - 1; i >= 0; i--)
	{
		vec[i + 1] = vec[i];
	}
	numOfElements++;
	increaseCapacity();

	vec[0] = value;
}

// insert given value to end of array
template<typename T> void myVector<T>::insertEnd(T value) {
	numOfElements++;
	increaseCapacity();
	vec[capacity - 1] = value;
}

// remove beginning of array, shift array
template<typename T> void myVector<T>::removeBeg() {
	for (int i = 0; i < capacity - 1; i++) {
		vec[i] = vec[i + 1];
	}
	vec[capacity - 1] = nullptr;
	numOfElements--;
	decreaseCapacity();
}

// remove end of array
template<typename T> void myVector<T>::removeEnd() {
	vec[capacity - 1] = nullptr;
	numOfElements--;
	decreaseCapacity();
}

// double capacity size if necessary
template<typename T> void myVector<T>::increaseCapacity() {
	if (capacity == numOfElements)
	{
		capacity *= 2;
	}
}

// halve capacity size if necessary
template<typename T> void myVector<T>::decreaseCapacity() {
	if ((capacity / 2) == numOfElements)
	{
		capacity /= 2;
	}
}

// return if both vectors are equal
template<typename T> bool myVector<T>::operator==(const myVector& secondVector)
{
	return (vec = secondVector.vec);
}
