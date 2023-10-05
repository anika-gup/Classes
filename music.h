#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include "parent.h"

using namespace std;

class music:public parent {


 public:
  music();
  void setArtist(char Artist[50]);
  char* getArtist();
  void setDuration(int Duration);
  int getDuration();
  void setPublisher (char Publisher[50]);
  char* getPublisher();
  void printMe();
 protected:
  char artist[50];
  int duration;
  char publisher[50];

} ;
#endif
