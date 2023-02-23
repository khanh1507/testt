#include "triangle.h"
#include <cstring>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
  Point pA(4, 6), pB(5, 7);
  Point pt1, pt2, pt3;
  cout << "Enter point A: " << endl;
  pA.input();
  cout << "Enter point B: " << endl;
  pB.input();
  cout << "Distance between A and B: " << pA.distance(pA, pB) << endl;
  cout << "Distance to Ox: " << pA.distance_toOx() << endl;
  cout << "Distance to Oy: " << pA.distance_toOy() << endl;

  cout << "____________TRIANGLE_______________: " << endl;
  Triangle t1;
  cout<<"Enter TRIANGLE: \n";
  t1.input();
  t1.output();
  t1.printTRIANGLE();


}
