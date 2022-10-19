#include <iostream>
#include "Complex.cpp"

// add two Complex objects together and return a new Complex object with those values
Complex additionTwo(Complex& comp1, Complex& comp2)
{
	return comp1.addition(comp2);
}

// add every Complex object within an array and return a new Complex object with those values
Complex additionArray(Complex complexArray[], int size)
{
	Complex addArr;

	for (int i = 0; i < size; i++)	// runs through the entire array and adds the values to a the new Complex object
	{
		addArr = additionTwo(addArr, complexArray[i]);
	}

	return addArr;
}

int main()
{
	// create comp1 and set values
	Complex comp1;
	comp1.setReal(2.4);
	comp1.setImg(4.1);

	// create comp2 with user input
	Complex comp2(3.2, -3.6);

	// print Complex of comp1 + comp2 using addition()
	comp1.addition(comp2).printComplex();

	// print Complex of comp1 + comp2 using additionTwo
	additionTwo(comp1, comp2).printComplex();
	
	// create two more Complex objects and make array including comp{1-4}
	Complex comp3(4.7, 3.1);
	Complex comp4(8.2, 4.4);
	Complex complexArr[4] = { comp1, comp2, comp3, comp4 };

	// use additionArray to add contents of array and print the new Complex object with the sums
	additionArray(complexArr, 4).printComplex();
}