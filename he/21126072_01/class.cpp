#include "class.h"
#include <iostream>
using namespace std;

Fraction::Fraction() {
  numernator = 0;
  denominator = 1;
}
Fraction::Fraction(int n, int d) {
  numernator = n;
  denominator = d;
}
Fraction::Fraction(const Fraction &f) {
  this->numernator = f.numernator;
  this->denominator = f.denominator;
}

Fraction::Fraction(int num) {
  this->numernator = num;
  this->denominator = 1;
}

Fraction::Fraction(const string &s) {
  if(checkString(s)) {
    int num = strtol(s.c_str(), NULL, 10);
    int i = 0;
    while (s[i] != '/') {
      numer += s[i];
      i++;
    }
    numernator = stoi(numer);
    denominator = stoi(s.substr(i + 1));
  }
  else {
    cout << "Invalid string" << endl;
  }
}



Fraction::Fraction(const Fraction &f) {
  this->numernator = f.numernator;
  this->denominator = f.denominator;
}



void Fraction::input( string s) {
  cout << "Enter the fraction: ";
  cin >> s;
}
void Fraction::output() {
    cout << "The fraction is: " << numernator << "/" << denominator << endl;
}
bool Fraction::checkString(const string &st){
    int i = 0;
    while (st[i] != '/') {
        if (st[i] < '0' || st[i] > '9') {
            return false;
        }
        i++;
    }  
    return true;
}
Fraction::~Fraction() {
  cout << "Destructor called" << endl;
}


