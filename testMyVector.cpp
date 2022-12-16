#include <stdio.h>
#include "myVector.h"
#include <iostream>

int main() {
	// create int vector 1
	myVector<int> intVector;
	intVector.insertEnd(4);
	intVector.insertBeg(3);
	intVector.insertEnd(6);
	intVector.insertEnd(2);
	intVector.insertBeg(1);
	intVector.removeEnd();
	intVector.removeBeg();

	// create int vector 2
	myVector<int> intVector2;
	intVector2.insertEnd(4);
	intVector2.insertBeg(7);
	intVector2.insertEnd(6);
	intVector2.insertEnd(2);
	intVector2.insertBeg(1);
	intVector2.removeEnd();
	intVector2.removeBeg();

	// test ==
	std::cout << "Testing == operator (int): " << (intVector == intVector2) << std::endl;

	//run same test but for char vectors this time
	myVector<char> charVector;
	charVector.insertEnd('4');
	charVector.insertBeg('3');
	charVector.insertEnd('6');
	charVector.insertEnd('2');
	charVector.insertBeg('1');
	charVector.removeEnd();
	charVector.removeBeg();

	myVector<char> charVector2;
	charVector2.insertEnd('4');
	charVector2.insertBeg('7');
	charVector2.insertEnd('6');
	charVector2.insertEnd('2');
	charVector2.insertBeg('1');
	charVector2.removeEnd();
	charVector2.removeBeg();

	std::cout << "Testing == operator (char): " << (charVector == charVector2) << std::endl;
}