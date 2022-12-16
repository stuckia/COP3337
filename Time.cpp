#include <iomanip>
#include <iostream>
#include <stdlib.h>

class Time {
private:
  unsigned int hour;
  unsigned int minute;
  unsigned int second;

public:
  Time() {
    hour = 0;
    minute = 0;
    second = 0;
  }

  Time(int seconds) {
    second = (seconds % 3600) % 60;
    minute = ((seconds % 3600) - second) / 60;
    hour = (seconds - (seconds % 3600)) / 3600;
    if (hour > 24) {
      hour = hour % 24;
    }
  }

  void printUniversal() const {
    std::cout << std::setfill('0');
    std::cout << "Universal time is: " << std::setw(2) << hour << ":"
              << std::setw(2) << minute << ":" << std::setw(2) << second
              << std::endl;
  }

  void printStandard() const {
    std::cout << std::setfill('0');
    if (hour / 12 >= 1) {
      std::cout << "Standard time is: " << std::setw(2) << (hour % 12) << ":"
                << std::setw(2) << minute << ":" << std::setw(2) << second
                << " PM" << std::endl;
    } else if (hour == 24) {
      std::cout << "Standard time is: " << std::setw(2) << (hour / 2) << ":"
                << std::setw(2) << minute << ":" << std::setw(2) << second
                << " PM" << std::endl;
    } else if (hour == 0) {
      std::cout << "Standard time is: " << std::setw(2) << 12 << ":"
                << std::setw(2) << minute << ":" << std::setw(2) << second
                << " AM" << std::endl;
    } else {
      std::cout << "Standard time is: " << std::setw(2) << hour << ":"
                << std::setw(2) << minute << ":" << std::setw(2) << second
                << " AM" << std::endl;
    }
  }
};