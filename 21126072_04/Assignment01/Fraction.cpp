
#include "Fraction.h"
#include <iostream>
using namespace std;


void Fraction::create(int a, int b) {
  Numberator = a;
  Denominator = b;
  
}
void Fraction::Input() {
  cout << "Enter the numberator: ";
  cin >> Numberator;
  cout << "Enter the denominator: ";
  cin >> Denominator;
}
void Fraction::Output() { 
cout << Numberator<< "/" << Denominator << endl; 
}
Fraction Fraction::Add(Fraction add) {
  Fraction temp;
  temp.Numberator = Numberator * add.Denominator + Denominator * add.Numberator;
  temp.Denominator = Denominator * add.Denominator;
  return temp;
}
Fraction Fraction::Substract(Fraction sub) {
  Fraction temp;
  temp.Numberator = Numberator * sub.Denominator - Denominator * sub.Numberator;
  temp.Denominator = Denominator * sub.Denominator;
  return temp;
}
Fraction Fraction::Multiply(Fraction mul) {
  Fraction temp;
  temp.Numberator = Numberator * mul.Numberator;
  temp.Denominator = Denominator * mul.Denominator;
  return temp;
}

Fraction Fraction::Divide(Fraction div) {
  Fraction temp;
  temp.Numberator = Numberator * div.Denominator;
  temp.Denominator = Denominator * div.Numberator;
  return temp;
}

int Fraction::Compare(Fraction com) {
  if (Numberator * com.Denominator > Denominator * com.Numberator)
    return 1;
  else if (Numberator * com.Denominator < Denominator * com.Numberator)
    return -1;
  else
    return 0;
}

bool Fraction::IsPositive() {
  if (Numberator * Denominator > 0)
    return true;
  else
    return false;
}
bool Fraction::IsNegative() {
  if (Numberator * Denominator < 0)
    return true;
  else
    return false;
}

bool Fraction::IsZero() {
  if (Numberator == 0)
    return true;
  else
    return false;
}
