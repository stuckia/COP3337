#include <iostream>
#include <string.h>

template <typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2) {
  T bigElement1 = list1[0];
  // find largest item in list1 []
  for (int i = 1; i < size1; i++) {
    if (list1[i] > bigElement1) {
      bigElement1 = list1[i];
    }
  }

  // make sure all contents of list2 are greater than bigElement1
  for (int i = 0; i < size2; i++) {
    if (bigElement1 > list2[i]) {
      return false;
    }
  }

  // else it is true
  return true;
};

int main() {
  // test integer array
  const int integer1[] = {1, 2, 3}, integer2[] = {4, 5, 6};
  int size1 = 3, size2 = 3;
  std::cout << "Integer true test returns: "
            << isGreater<int>(integer1, integer2, size1, size2) << std::endl;
  const int integer3[] = {2, 3, 7};
  std::cout << "Integer false test returns: "
            << isGreater<int>(integer3, integer2, size1, size2) << std::endl;

  // test double array
  const double double1[] = {1.0, 2.0, 3.0}, double2[] = {4.0, 5.0, 6.0};
  // do not need to change size variables
  std::cout << "Double true test returns: "
            << isGreater<double>(double1, double2, size1, size2) << std::endl;
  const double double3[] = {2.0, 3.0, 7.0};
  std::cout << "Double false test returns: "
            << isGreater<double>(double3, double2, size1, size2) << std::endl;

  // test string array
  const std::string string1[] = {"aaa", "bbb", "ccc"},
                    string2[] = {"ddd", "eee", "fff"};
  std::cout << "String true test returns: "
            << isGreater<std::string>(string1, string2, size1, size2)
            << std::endl;
  const std::string string3[] = {"aaa", "ccc", "ggg"};
  std::cout << "String false test returns: "
            << isGreater<std::string>(string3, string1, size1, size2)
            << std::endl;
  return 0;
}