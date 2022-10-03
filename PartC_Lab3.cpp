#include <iostream>
#include <math.h>
#include <sstream>
#include <string>

double sumEven(const double *arr, int size);

int main() {
  std::string str;
  int size = 6;
  double val[size];

  std::cout << "Please enter six double numbers: ";
  for (int i = 0; i < size; i++) {
    std::cin >> val[i];
  }

  const double *arr = val;
  std::cout << "Sum of values at even locations: " << sumEven(arr, size);

  return 0;
}

double sumEven(const double *arr, int size) {
  double sum = 0;

  for (int i = 0; i < size; i++) {
    if (fmod(*(arr + i), 2) == 0.0) {
      sum += *(arr + i);
    }
  }

  return sum;
}
