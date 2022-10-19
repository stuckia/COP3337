#include <iostream>
#include "Complex.h"

// declare variables real and img
// double real;
// double img;

inline Complex::Complex()	// no-argument constructor
{
	real = 0.0;
	img = 0.0;
}

inline Complex::Complex(double r, double i)	// user-defined constructor
{
	real = r;
	img = i;
}

inline double Complex::getReal()	// returns the double value of real
{
	return real;
}

inline double Complex::getImg()	// returns the double value of img
{
	return img;
}

inline void Complex::setReal(double r)	// sets real to a given double r
{
	real = r;
}

inline void Complex::setImg(double i)	// sets img to a given double i
{
	img = i;
}

inline void Complex::printComplex()	// prints the variables in imaginary number format
{
	std::cout << real << " + " << img << "i" << std::endl;
}

inline Complex Complex::addition(Complex& comp)	// returns a new Complex object with the newly added variables
{
	return Complex(real + comp.getReal(), img + comp.getImg());
}