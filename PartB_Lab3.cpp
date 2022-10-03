#include <iostream>

int main() {
  int num = 5;   // create int variable num
  int *p = &num; // create pointer to int variable num

  // print value of num
  std::cout << "The value of the num is " << num << std::endl;
  std::cout << "The value of the num is " << *p << std::endl;

  // print address of num
  std::cout << "The address of the num is " << &num << std::endl;
  std::cout << "The address of the num is " << p << std::endl;

  // print pointer p value and address
  std::cout << "The value of the p pointer is " << p << std::endl;
  std::cout << "The address of the p pointer is " << &p << std::endl;

  return 0;
}
