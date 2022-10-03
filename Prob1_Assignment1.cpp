#include <iostream>
#include <math.h>

int main()
{
	//declare variable
	int num;

	//retrieve value and store in num variable
	std::cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
	std::cin >> num;

	//analyze num
	if (num < 0)	//check if negative
	{
		std::cout << "The program does not accept negative numbers" << std::endl;
	}
	else if (num <= 100 && num%4 == 0)		//check if less than or equal to 100 and divisible by 4
	{
		std::cout << "The given number (" << num << ") is divisible by 4" << std::endl;
		std::cout << "Quotient: " << (num / 4) << " and Remainder: 0" << std::endl;
	}
	else if (num <= 100)		// check if less than or equal to 100 (catches not divisible by 4)
	{
		std::cout << "The given number (" << num << ") is not divisible by 4" << std::endl;
		std::cout << "Quotient " << (num / 4) << " and Remainder: " << (num % 4) << std::endl;
	}
	else	//runs if greater than 100
	{
		std::cout << "The entered number is greater than 100 and square root of the number is " << sqrt(num) << std::endl;
	}

	//return 0 to end code
	return 0;
}
