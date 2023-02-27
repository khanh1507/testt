#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class Fraction {
private:
  int numernator;
  int denominator;

public:
  Fraction();
  Fraction(int n, int d);
  Fraction(const Fraction &f);
  ~Fraction();
};
class Point {
private:
  int x;
  int y;

public:
  //Point();
  //Point(int x, int y);
  //Point(const Point &p);
  //~Point();
  void print() { cout << "(" << x << ", " << y << ")" << endl; }
};

class Triangle {
private:
  Point p1;
  Point p2;
  Point p3;

public:
  Triangle();
  Triangle(Point p1, Point p2, Point p3);
  Triangle(const Triangle &t);
  ~Triangle();
};
class Circle {
private:
  Point center;
  double radius;

public:
  Circle();
  Circle(Point center, double radius);
  Circle(const Circle &c);
  ~Circle();
};
class MyDate {
private:
  int year;
  int month;
  int day;

public:
  MyDate();
  MyDate(int year, int month, int day);
  MyDate(const MyDate &d);
  ~MyDate();
};
class MyTime {
private:
  int hour;
  int minute;
  int second;

public:
  MyTime();
  MyTime(int hour, int minute, int second);
  MyTime(const MyTime &t);
  ~MyTime();
};

class ColorPixel {
private:
  int red;
  int green;
  int blue;

public:
  ColorPixel();
  ColorPixel(int red, int green, int blue);
  ColorPixel(const ColorPixel &p);
  ~ColorPixel();
};
class MyIntArray {
private:
  int *p;
  int n;

public:
  MyIntArray();
  MyIntArray(int n);
  MyIntArray(const MyIntArray &a);
  ~MyIntArray();
};
class Student {
private:
  int id;
  char *fullname;
  char *address;
  double gpa;

public:
  Student();
  Student(int id, char *fullname, char *address, double gpa);
  Student(const Student &s);
  ~Student();
};
class Lecturer {
private:
  int id;
  char *fullname;
  string degree; //(BSc, MSc, PhD)
public:
  Lecturer();
  Lecturer(int id, char *fullname, string degree);
  Lecturer(const Lecturer &l);
  ~Lecturer();
};
