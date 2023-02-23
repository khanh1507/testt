#include<iostream>
#include <math.h>
#include"Fraction.h"

using namespace std;

int main(){
    Fraction f1, f2, f3;
    cout<<"Enter the first fraction 1: "<<endl;
    f1.input();
    cout<<"Enter the second fraction 2: "<<endl;
    f2.input();
    f1.output();
    cout<<" ; ";
    f2.output();
    cout<<"addition: ";
    f3.add(f1, f2);
    cout<<" subtraction: ";
    f3.sub(f1, f2);
    cout<<" multiplication: ";
    f3.mul(f1, f2);
    cout<<" division:";
    f3.div(f1, f2);
    cout<<" reduce: ";
    f3.Reduce(f1);
    cout<<" compare: "<<f3.Compare(f1, f2);
    cout<<"is positive: "<<f3.IsPositive(f1);
    cout<<"is negative: "<<f3.IsNegative(f1);
    cout<<" is zero: "<<f3.isZero(f1);
    return 0;

}