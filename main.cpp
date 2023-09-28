#include <iostream>
#include <cstring>
#include <string.h>
#include <vector>
#include "music.h"
#include "movie.h"
#include "videogame.h"
using namespace std;
music* ADD_M();
movie* ADD_MV();
videogame* ADD_VG();
void SEARCH(vector<parent*> storage);
//void DELETE(vector<parent*> &storage, int year, char[50] title);
int main() {

  cout << "Printing!" << endl;
  
  //music* m = new music();

  vector<parent*> storage;
  //storage.push_back(m);
  //cout << "child n value is: " << m->getN() << endl;
  char choice[6];
  int quit = 0;

  while (quit==0) {
    cout << "Commands are: ADD, SEARCH, DELETE, QUIT." << endl;
    cin >> choice;
    if (choice[0]=='A' && choice[1]=='D' && choice[2]=='D') {
      cout << "Creating something..." << endl;
      quit=0;
      cout << "CHOICES:  VIDEOGAME  MOVIE  MUSIC" << endl;
      cin >> choice;
      if (strcmp(choice, "VIDEOGAME")==0) {
	cout << "creating video game." << endl;
	storage.push_back(ADD_VG());
      }
      else if (strcmp(choice, "MOVIE")==0) {
	cout << "creating movie." << endl;
	storage.push_back(ADD_MV());
      }
      else if (strcmp(choice, "MUSIC")==0) {
	cout << "creating music" << endl;
	storage.push_back(ADD_M());
      }
      else {
	cout << "You inputted the wrong thing...?" << endl;
      }

    } // if choice is add..

    else if (choice[0]=='Q' && choice[1]=='U' && choice[2]=='I' && choice[3]=='T') {
      cout << "quitting, thanks." << endl;
      quit=1;

    }





  } // while quit =0;
  
  return 0;
}

music* ADD_M() {
  music* m = new music();
  cout << "in function to add music" << endl;
  int year;
  cout << "Year:  " ;
  cin >> year;
  m->setYear(year);
  int duration;
  char title[50];
  char artist[50];
  char publisher[50];
  cout << "Duration:  ";
  cin >> duration;
  m->setDuration(duration);
  cout << "Title:  " ;
  cin >> title;
  m->setTitle(title);
  cout << "Artist:  " ;
  cin >> artist;
  m->setArtist(artist);
  cout << "Publisher:  " ;
  cin >> publisher;
  m->setPublisher(publisher);
  return m;
}
movie* ADD_MV() {
  movie* mv = new movie();
  cout << "in function to add movie" << endl;
  char title[50];
  char director[50];
  int year;
  int duration;
  int rating;
  cout << "Year: ";
  cin >> year;
  mv->setYear(year);
  cout << "Title: " ;
  cin >> title;
  mv->setTitle(title);
  cout << "Director: " ;
  cin >> director;
  mv->setDirector(director);
  cout << "Duration: " ;
  cin >> duration;
  mv->setDuration(duration);
  cout << "Rating: " ;
  cin >> rating;
  mv->setRating(rating);
  return mv;
}
videogame* ADD_VG() {
  videogame* vg = new videogame();
  cout << "in function to add videogame" << endl;
  char title[50];
  int year;
  int rating;
  char publisher[50];
  cout << "Title: " ;
  cin >> title;
  vg->setTitle(title);
  cout << "Year: ";
  cin >> year;
  vg->setYear(year);
  cout << "Rating: ";
  cin >> rating;
  vg->setRating(rating);
  cout << "Publisher: ";
  cin >> publisher;
  vg->setPublisher(publisher);
  return vg;
}
void SEARCH(vector <parent*> storage) {
  cout << "in function to add search." << endl;


}
void DELETE(vector<parent*> &storage, int year) { // also input title later

  cout << "in function to delete." << endl;
}
