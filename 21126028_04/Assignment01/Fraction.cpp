#include "Fraction.h"
#include<iostream>
using namespace std;

void Fraction::input(){
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;
}

void Fraction::output(){
    cout << numerator << "/" << denominator << endl;
}
Fraction Fraction::add(Fraction f1, Fraction f2){
    numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    denominator = f1.denominator * f2.denominator;
}
Fraction Fraction::sub(Fraction f1, Fraction f2){
    numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    denominator = f1.denominator * f2.denominator;
}

Fraction Fraction::div(Fraction f1, Fraction f2){
    numerator = f1.numerator * f2.denominator;
    denominator = f1.denominator * f2.numerator;
}
Fraction Fraction::mul(Fraction f1, Fraction f2){
    numerator = f1.numerator * f2.numerator;
    denominator = f1.denominator * f2.denominator;
    if(denominator ==0){
        cout << "Error: Division by zero" << endl;
    }
}
Fraction Fraction::Reduce(Fraction f1){
    int gcd = 1;
    int k = 2;
    while (k <= f1.numerator && k <= f1.denominator){
        if (f1.numerator % k == 0 && f1.denominator % k == 0){
            gcd = k;
        }
        k++;
    }
    numerator = f1.numerator / gcd;
    denominator = f1.denominator / gcd;
}

string Fraction::Compare(Fraction f1, Fraction f2){
    if (f1.numerator * f1.denominator > f2.numerator * f2.denominator){
        return ">";
    }
    else if (f1.numerator * f1.denominator < f2.numerator * f2.denominator){
        return "<";
    }
    else{
        return "=";
    }
}

bool Fraction::IsPositive(Fraction f1){
    if (f1.numerator * f1.denominator > 0){
        return true;
    }
    else{
        return false;
    }
}
bool Fraction::IsNegative(Fraction f1){
    if (f1.numerator * f1.denominator < 0){
        return true;
    }
    else{
        return false;
    }
}

bool Fraction::isZero(Fraction f1){
    if (f1.numerator * f1.denominator == 0){
        return true;
    }
    else{
        return false;
    }
}
