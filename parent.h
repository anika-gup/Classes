#ifndef PARENT_H
#define PARENT_H

#include <iostream>
using namespace std;

class parent {
 public:
  parent();
  void setTitle(char myTitle[50]);
  char* getTitle();
  void setYear(int Year);
  int getYear();
  virtual void printMe() = 0;
 protected:
  int year;
  char title[50];
  char publisher[50];
  int rating;

};

#endif
