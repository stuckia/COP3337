#include <iostream>
#include "MyInteger.cpp"

int main()
{
	std::cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << std::endl;	//return initial average
	std::cout << "isOdd(3) = " << MyInteger::isOdd(3) << std::endl;	//test if 3 is odd

	//create three MyInteger objects
	MyInteger i1(9323);
	MyInteger i2(147);
	MyInteger i3(9323);

	//perform tests to see if code succeeds and returns correct values
	std::cout << "i1.isEven() = " << i1.isEven() << std::endl;
	std::cout << "i3.equals(843) = " << i3.equals(843) << std::endl;
	std::cout << "i1.equals(i3) = " << i1.equals(i3) << std::endl;
	std::cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << std::endl;
}