#include <iostream>

int main() {
  int num; // initialize variables
  int sum = 0;

  std::cout
      << "Enter an integer between 0 and 1000000: "; // retrieve num from input
  std::cin >> num;

  // only perform while num fits constraints (via assignment wording)
  if (num > 0 && num < 1000000) {
    while (num > 0) { // loops for each digit in num
      sum += (num % 10);

      num = num / 10;
    }
    std::cout << "The sum of the digits is " << sum
              << "."; // returns total sum of digits
  }

  return 0;
}
