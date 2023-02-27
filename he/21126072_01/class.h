#include <iostream>
#include <string.h>
#include <string>
using namespace std;


class Fraction {
private:
  int numernator;
  int denominator;
  string numer;

public:
  Fraction();
  Fraction(int n, int d);
  Fraction(int num);
  Fraction(const Fraction &f);
  Fraction(const string &s);
  
  bool checkString(const string &st);
  
  void input(string s);
  void output();
 
  
  ~Fraction();
};
