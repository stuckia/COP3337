#include <iostream>
#include <string>

int main() {
  std::string str; // initialize variable str

  std::cout << "Enter a string: "; // retrieve string from input
  std::getline(std::cin, str);

  // print characters at odd index positions
  for (int i = 1; i < str.length(); i += 2) {
    std::cout << str.at(i);
  }

  return 0;
}
