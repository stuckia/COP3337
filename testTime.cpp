#include "Time.cpp"
#include <iostream>

int main() {
  Time t1;
  Time t2(555550);
  Time t3(55550);

  t1.printUniversal();
  t1.printStandard();
  std::cout << "---------------" << std::endl;
  t2.printUniversal();
  t2.printStandard();
  std::cout << "---------------" << std::endl;
  t3.printUniversal();
  t3.printStandard();
}