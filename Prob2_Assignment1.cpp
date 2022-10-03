#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	double side;
	std::cout << "Enter the side: ";
	std::cin >> side;

	double area = (6 * exp(side)) / (4 * tan(3.14 / 6));

	std::cout << "The area of the hexagon is " << std::setprecision(2) << area << std::endl;

	return 0;
}
