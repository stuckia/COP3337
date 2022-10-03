#include <iostream>
#include <math.h>

int main() {
  int num; // initialize num variable

  std::cout << "Enter an integer number to see if the given number is "
               "divisible by 4 or not: "; // retrieve value of num
  std::cin >> num;

  // analyze num and print proper results
  if (num < 0) {
    std::cout << "The program does not accept negative numbers.";
  } else if (num <= 100 && num % 4 == 0) {
    std::cout << "The given number (" << num << ") is divisible by 4."
              << std::endl;
    std::cout << "Quotient: " << (num / 4) << " and Remainder: 0";
  } else if (num <= 100) {
    std::cout << "The given number (" << num << ") is not divisible by 4."
              << std::endl;
    std::cout << "Quotient: " << (num / 4) << " and Remainder: " << (num % 4);
  } else {
    std::cout << "The entered number is greater than 100 and square root of "
                 "the number is "
              << sqrt(num);
  }

  return 0;
}
