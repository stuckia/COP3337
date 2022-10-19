#include <iostream>

class Complex
{
	// declare private instance fields
	private:
		double real;
		double img;

	// declare public constructors
	public:
		Complex();
		Complex(double r, double i);
	
	// declare methods to be accessed within Complex.cpp
	double getReal();
	double getImg();
	void setReal(double r);
	void setImg(double i);
	void printComplex();

	// declare method that creates a new Complex object using addition
	Complex addition(Complex &comp);
};

