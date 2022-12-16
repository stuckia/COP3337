#ifndef MYSET_H
#define MYSET_H

class MySet {
private:
  unsigned int range;
  int size;
  bool *set;

public:
  MySet(unsigned);
  MySet(const MySet &set2);
  ~MySet();
  void insertElement(int k);
  void deleteElement(int m);
  void printSet();
  bool isEqualTo(const MySet &set2);
};

#endif