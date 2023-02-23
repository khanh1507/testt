
#include<string>
#include<cstring>
using namespace std;

class Point {
private:
  double x;
  double y;

public:
  Point();
  Point(double x, double y);
  Point(const Point &p);
  ~Point();
  void input();
  void output();
  double distance(Point p, Point q);
  double distance_toOx();
  double distance_toOy();
};
class Triangle {
private:
  Point PC;
  Point PB;
  Point PA;

public:
  Triangle();
  Triangle(Point pA, Point pB, Point pC);
  Triangle(const Triangle &t);
  ~Triangle();
  void input();
  void output();
  bool isValidTriangle();
  void printTRIANGLE();
  string typeOfTriangle();
  double perimeter();
  double area();
  Point  CenterG();
};
