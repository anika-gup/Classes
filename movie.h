#ifndef MOVIE_H
#define MOVIE_H


#include <iostream>
#include "parent.h"

using namespace std;

class movie:public parent {

 public:
  movie();
  char* getDirector();
  void setDirector(char Director[50]);
  int getRating();
  void setRating(int Rating);
  int getDuration();
  void setDuration(int Duration);
 protected:
  char director[50];
  int rating;
  int duration;






} ;



#endif
