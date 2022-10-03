#include <iostream>

int main() {
  // declare variables
  std::string firstName;
  std::string lastName;
  int seconds;

  // gather variable values
  std::cout << "Please enter your first name: ";
  std::cin >> firstName;
  std::cout << "Please enter your last name: ";
  std::cin >> lastName;

  // calculate total seconds of studying
  // seconds = 60*60*((13 weeks * (2.5 hr lectures+2.5 hr self study)) + (2 hr midterms+2 hr exam))
  seconds = 60 * 60 * ((13 * (2.5 + 2.5)) + (2 + 2));

  std::cout << "First Name: " << firstName << std::endl;
  std::cout << "Last Name: " << lastName << std::endl;
  std::cout << "I am supposed to spend " << seconds
            << " seconds studying C++ Programming" << std::endl;

  return 0;
}
