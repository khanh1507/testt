#include"triangle.h"
#include<iostream>
#include<math.h>

using namespace std;

void Point::input(){
    cout<<"Enter the x: ";
    cin>>x;
    cout<<"Enter the y: ";
    cin>>y;
}
void Point::output(){
    cout<<"("<<x<<","<<y<<")";
}

//distance from point A to point B

void Point::distance_ab(){
    double d;
    d=sqrt(pow((x-0),2)+pow((y-0),2));
    cout<<"Distance AB: "<<d<<endl;
}
void Point::distance_ox(){
    double d;
    d=sqrt(pow((x-0),2)+pow((y-0),2));
    cout<<"Distance X: "<<d<<endl;
}

void Point::distance_oy(){
    double d;
    d=sqrt(pow((x-0),2)+pow((y-0),2));
    cout<<"Distance  OY: "<<d<<endl;
}


void Triangle::input(){
    cout<<"Enter A: "<<endl;
    a.input();
    cout<<"Enter B: "<<endl;
    b.input();
    cout<<"Enter C: "<<endl;
    c.input();
}
void Triangle::output(){
    cout<<"A: ";
    a.output();
    cout<<" B: ";
    b.output();
    cout<<" C: ";
    c.output();
    cout<<endl;
}
void Triangle::isvalidTriangle(){
   
    double d1,d2,d3;
    d1=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
    d2=sqrt(pow((a.x-c.x),2)+pow((a.y-c.y),2));
    d3=sqrt(pow((b.x-c.x),2)+pow((b.y-c.y),2));
    if(d1+d2>d3 && d1+d3>d2 && d2+d3>d1){
        cout<<"This is a valid triangle"<<endl;
    }
    else{
        cout<<"This is not a valid triangle"<<endl;
    }
}
void  Triangle::Type(){
    double d1,d2,d3;
    d1=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
    d2=sqrt(pow((a.x-c.x),2)+pow((a.y-c.y),2));
    d3=sqrt(pow((b.x-c.x),2)+pow((b.y-c.y),2));
    if(d1==d2 && d2==d3){
        cout<<"This is a equilateral triangle"<<endl;
    }
    else if(d1==d2 || d2==d3 || d1==d3){
        cout<<"This is a isosceles triangle"<<endl;
    }
    else{
        cout<<"This is a scalene triangle"<<endl;
    }
}
void Triangle::Primeter(){
    double d1,d2,d3;
    d1=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
    d2=sqrt(pow((a.x-c.x),2)+pow((a.y-c.y),2));
    d3=sqrt(pow((b.x-c.x),2)+pow((b.y-c.y),2));
    cout<<"Primeter: "<<d1+d2+d3<<endl;
}
void Triangle::Area(){
    double d1,d2,d3;
    d1=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
    d2=sqrt(pow((a.x-c.x),2)+pow((a.y-c.y),2));
    d3=sqrt(pow((b.x-c.x),2)+pow((b.y-c.y),2));
    double p=(d1+d2+d3)/2;
    double s=sqrt(p*(p-d1)*(p-d2)*(p-d3));
    cout<<"Area: "<<s<<endl;
}
Point Triangle::Center(){
    Point center;
    center.x=(a.x+b.x+c.x)/3;
    center.y=(a.y+b.y+c.y)/3;
    return center;
}
