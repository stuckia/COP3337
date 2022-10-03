#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  double side; // initialize variables
  double area;

  std::cout << "Enter the side: "; // retrieve side value
  std::cin >> side;

  area = (6.0 * std::pow(side, 2)) /
         (4.0 * tan(M_PI / 6.0)); // calculate the area using side

  std::cout << "The area of the hexagon is " << std::setprecision(4)
            << area; // print the area

  return 0;
}
