#include "triangle.h"
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

Point::Point() {
  x = 0;
  y = 0;
}
Point::Point(double x, double y) {
  this->x = x;
  this->y = y;
}
Point::Point(const Point &p) {
  x = p.x;
  y = p.y;
}

Point::~Point()
{}
void Point::input() {
  cout << "Enter x: ";
  cin >> x;
  cout << "Enter y: ";
  cin >> y;
}
void Point::output() { 
    cout << "(" << x << ", " << y << ")" << endl; 
}

double Point::distance(Point p, Point q) {
  return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}
double Point::distance_toOx() { return y; }
double Point::distance_toOy() { return x; }


/////////////////     /
Triangle::Triangle() {
  Point pA(0, 0);
  Point pB(0, 0);
  Point pC(0, 0);
  PA = pA;
  PB = pB;
  PC = pC;
}
Triangle::Triangle(Point pA, Point pB, Point pC) {
  PA = pA;
  PB = pB;
  PC = pC;
}
Triangle::Triangle(const Triangle &t) {
  PA = t.PA;
  PB = t.PB;
  PC = t.PC;
}

Triangle::~Triangle() { 
  cout<<"----------------------------------\n";
  cout << "Triangle destructor called" << endl; 
}

void Triangle::input() {
  cout << "Enter point A: " << endl;
  PA.input();
  cout << "Enter point B: " << endl;
  PB.input();
  cout << "Enter point C: " << endl;
  PC.input();
}
void Triangle::output() {
  cout << "Point A: ";
  PA.output();
  cout << "Point B: ";
  PB.output();
  cout << "Point C: ";
  PC.output();
}

bool Triangle::isValidTriangle() {
  double a = PA.distance(PA, PB);
  double b = PB.distance(PB, PC);
  double c = PC.distance(PC, PA);
  if (a + b > c && a + c > b && b + c > a)
    return true;
  else
    return false;
}




  string Triangle::typeOfTriangle() {
  double a = PA.distance(PA, PB);
  double b = PB.distance(PB, PC);
  double c = PC.distance(PC, PA);
  if (a == b && b == c)
    return "Equilateral";
  else if (a == b || b == c || a == c)
    return "Isosceles";
  else{
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            return "Right";
        else
            return "Scalene";
      }
    
}  
double Triangle::perimeter() {
  double a = PA.distance(PA, PB);
  double b = PB.distance(PB, PC);
  double c = PC.distance(PC, PA);
  return a + b + c;
}
double Triangle::area() {
  double a = PA.distance(PA, PB);
  double b = PB.distance(PB, PC);
  double c = PC.distance(PC, PA);
  double p = (a + b + c) / 2;
  return sqrt(p * (p - a) * (p - b) * (p - c));
}

Point Triangle::CenterG() {
  double x = (PA.distance_toOy() + PB.distance_toOy() + PC.distance_toOy()) / 3;
  double y = (PA.distance_toOx() + PB.distance_toOx() + PC.distance_toOx()) / 3;
 Point p(x, y);
  return p;
}
void Triangle::printTRIANGLE() {
  if (isValidTriangle()==true) {
    cout << "Triangle is valid" << endl;
    cout << "Type of triangle: " << typeOfTriangle() << endl;
    cout << "Perimeter: " << perimeter() << endl;
    cout << "Area: " << area() << endl;
    cout << "Center of gravity: ";
    CenterG().output();
  } else
    cout << "Triangle is not valid" << endl;

}





