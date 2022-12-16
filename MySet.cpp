#include "MySet.h"
#include <iostream>
#include <stdio.h>

// creates a MySet object with dynamic array
MySet::MySet(unsigned int range) {
  this->range = range;
  set = new bool[range + 1];
  size = 0;
  for (int i = 0; i < range; i++) {
    set[i] = false;
  }
}

// copy constructor
MySet::MySet(const MySet &set2) {
  this->set = set2.set;
  this->range = set2.range;
  this->size = set2.size;
}

// destructor
MySet::~MySet() {}

// change set[m] to true, size++
void MySet::insertElement(int k) {
  if (k < 0 || k > range) {
    std::cout << "WARNING: element not in range" << std::endl;
  } else {
    set[k] = true;
    size++;
  }
}

// change set[m] to false, size--
void MySet::deleteElement(int m) {
  if (m < 0 || m > range) {
    std::cout << "WARNING: element not in range" << std::endl;
  } else {
    set[m] = false;
    size--;
  }
}

// print contents of this.set
void MySet::printSet() {
  std::cout << "{ ";

  if (size == 0) {
    std::cout << "--- }" << std::endl;
  } else {
    for (int i = 0; i < range + 1; i++) {
      if (set[i] == true && i == range) {
        std::cout << i << " }" << std::endl;
      } else if (set[i] == true) {
        std::cout << i << ", ";
      }
    }
  }
}

// return boolean of whether this.set and set2.set are equal
bool MySet::isEqualTo(const MySet &set2) { return (this->set == set2.set); }
