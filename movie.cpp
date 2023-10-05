#include <iostream>
#include "movie.h"
#include <cstring>
using namespace std;

movie::movie() {
  //  cout << "movie cpp!" << endl;

 
}

char* movie::getDirector() {
  return director;

}
void movie::setDirector(char Director[50]) {
  strcpy(director, Director);
}
int movie::getRating() {
  return rating;
}
void movie::setRating(int Rating) {
  rating = Rating;
}
int movie::getDuration() {
  return duration;
}
void movie::setDuration(int Duration) {
  duration = Duration;
}

void movie::printMe() {
  cout << ", Director: " << director << ", Rating: " << rating << ", Duration: " << duration << endl;
}
