#include <iostream>
#include "music.h"

using namespace std;

music::music() {

  //cout << "music cpp !!"  << endl;

 
}

void music::setArtist(char Artist[50]) {
  strcpy(artist, Artist);
}
char* music::getArtist() {
  return artist;
}
void music::setDuration(int Duration) {
  duration = Duration;
}
int music::getDuration() {
  return duration;
}
void music::setPublisher(char Publisher[50]) {
  strcpy(publisher, Publisher);
}
char* music::getPublisher() {
  return publisher;
}

void music::printMe() {
  cout << ", Artist: " << artist << ", Duration: " << duration << ", Publisher: " << publisher << endl;
}
