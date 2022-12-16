#include "MySet.h"
#include <iostream>

int main() {
  MySet set1(20);
  set1.insertElement(13);
  set1.insertElement(7);
  set1.insertElement(20);
  set1.insertElement(21);

  set1.printSet();

  set1.deleteElement(22);
  set1.deleteElement(13);

  set1.printSet();

  MySet set2(100);

  set2.printSet();

  MySet set3(set1);
  std::cout << "set3.isEqualTo(set1) = " << set3.isEqualTo(set1) << std::endl;

  return 0;
}