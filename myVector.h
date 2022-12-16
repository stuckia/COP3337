#ifndef MYVECTOR_H
#define MYVECTOR_H

template<typename T> class myVector {
public:
	// instance fields
	T* vec;
	int numOfElements, capacity;

	// (de- and) constructors
	myVector();
	myVector(int capacity);
	myVector(const myVector<T>& vector);
	~myVector();
	
	// alter array
	void insertBeg(T value);
	void insertEnd(T value);
	void removeBeg();
	void removeEnd();
	
	// alter size
	void increaseCapacity();
	void decreaseCapacity();
	
	bool operator==(const myVector& secondVector);
};

#endif