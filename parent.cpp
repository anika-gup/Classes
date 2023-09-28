#include <iostream>
#include "parent.h"
using namespace std;

parent::parent() {
  cout << "Parent CPP !!" << endl;
 
}

void parent::setTitle(char myTitle[50]) {
  strcpy(title, myTitle);
}
char* parent::getTitle() {
  return title;
}
void parent::setYear(int Year) {
  year = Year;
}
int parent::getYear() {
  return year;

}
