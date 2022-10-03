#include <cctype>
#include <cstring>
#include <iostream>

// initialize method
std::string swapcase(const std::string &n);

int main() {
  std::string str; // create string str

  std::cout << "Enter a string: ";
  std::getline(std::cin, str); // retrieve str from input

  std::cout << "The new string is: "
            << swapcase(
                   str); // return the altered str after performing swapcase

  return 0;
}

std::string swapcase(const std::string &n) {
  std::string s = n; // make new string s equal to n

  for (int i = 0; i < s.size(); i++) {
    if (islower(s[i])) {
      s[i] = toupper(s[i]); // convert lower to upper
    } else if (isupper(s[i])) {
      s[i] = tolower(s[i]); // convert upper to lower
    }
  }

  return s; // return swapped string s
}
