
#include <cstring>
#include <string.h>
using namespace std;

class Point {
    private:
      double x;
      double y;
    public  :
    void input();
    void output();
    void distance_ab();
    void distance_ox();
    void distance_oy();
      
};
class Triangle {
    private:

    Point a;
    Point b;
    Point c;
    public  :
    void input();
    void output();
    void isvalidTriangle();
    void Type();
    void Primeter();
    void Area();
    void Center();
    
      
};