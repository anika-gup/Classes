#include <iostream>
#include "videogame.h"
#include <cstring>
using namespace std;


videogame::videogame() {
  //cout << "video game cpp!!" << endl;

}


void videogame::setPublisher(char Publisher[50]) {
  //cout << "Adding publisher: " << Publisher << endl;
  strcpy(publisher, Publisher);

}

char* videogame::getPublisher() {
  //cout << "Publisher: " << publisher << endl;

  return publisher;
}

void videogame::setRating(int Rating) {
  rating = Rating;
}

int videogame::getRating() {
  //cout << "Rating: " << rating << endl;
  return rating;
}

void videogame::printMe() {
  cout << ", Publisher: " << publisher << ", Rating: " << rating << endl;

}
