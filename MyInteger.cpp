#include <iostream>
#include "MyInteger.h"

inline MyInteger::MyInteger(int val)	//constructor, initialize variables
{
	value = val;
	numberOfObjects++;
	sumOfIntegers += value;
	averageOfIntegers = (1.0 * sumOfIntegers) / (1.0 * numberOfObjects);
}

inline const int MyInteger::getValue()	//returns int value
{
	return value;
}

inline const bool MyInteger::isEven()	//returns 1 if value is even
{
	return (value % 2 == 0);
}

inline bool MyInteger::isOdd(int val)	//returns 1 if inputted val is odd
{
	return (val % 2 != 0);
}

inline const bool MyInteger::equals(int val)	//check to see if inputted val is equal to this object's value
{
	return (value == val);
}

inline const bool MyInteger::equals(const MyInteger &myInt)		//checks to see if two MyInteger objects have the same value
{
	return (MyInteger::equals(myInt.value));
}

inline double MyInteger::getAverageOfIntegers()		//returns the averageOfIntegers double
{
	return averageOfIntegers;
}