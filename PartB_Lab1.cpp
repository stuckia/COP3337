#include <iostream>

int main() {
  // declare variables
  double distance;
  double mpg;
  double ppg;
  double cost;

  // gather variable values
  std::cout << "Enter the driving distance: ";
  std::cin >> distance;
  std::cout << "Enter miles per gallon: ";
  std::cin >> mpg;
  std::cout << "Enter price per gallon: ";
  std::cin >> ppg;

  // calculate cost
  cost = (distance / mpg) * ppg;

  std::cout << "The cost of driving is $" << cost << std::endl;

  return 0;
}
