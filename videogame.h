#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <iostream>
#include "parent.h"

using namespace std;

class videogame:public parent {

 public:
  videogame();
  void setPublisher(char Publisher[50]);
  char* getPublisher(); 
  void setRating(int Rating);
  int getRating();
  void printMe();
 protected:
  char publisher[50];
  int rating;



} ;


#endif
