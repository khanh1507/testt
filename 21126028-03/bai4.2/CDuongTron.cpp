#include "CDuongTron.h"
#include <iostream>



using namespace std;

// constructor
CDiem::CDiem() {
  x = 0;
  y = 0;
}
CDiem::CDiem(double x, double y) {
  this->x = x;
  this->y = y;
}
CDiem::CDiem(const CDiem &t) {
  this->x = t.x;
  this->y = t.y;
}

CDiem::~CDiem() { x = y = NULL; }
double CDiem::get_x() { return x; }
double CDiem::get_y() { return y; }
// setter
void CDiem::set_x(double x) { this->x = x; }
void CDiem::set_y(double y) { this->y = y; }
void CDiem::input() {
  cout << "Nhap x: ";
  cin >> x;
  cout << "Nhap y: ";
  cin >> y;
}
void CDiem::output() {
  cout << " x=" << x;
  cout << " y=" << y;
}

CDuongTron::CDuongTron() { R = 0; }
CDuongTron::CDuongTron(double R) { this->R = R; }
CDuongTron::CDuongTron(const CDuongTron &dt) { this->R = dt.R; }
CDuongTron::~CDuongTron() { R = 0; }
// getter
CDiem CDuongTron::get_O() { return O; }
double CDuongTron::get_R() { return R; }
// setter
void CDuongTron::set_O(CDiem O) { this->O = O; }
void CDuongTron::set_R(double R) { this->R = R; }
void CDuongTron::input() {
  cout << "Nhap toa do tam O: \n";
  O.input();
  cout << "Nhap ban kinh: ";
  cin >> R;
}
void CDuongTron::output() {
  cout << "Toa do tam O: ";
  O.output();
  cout << " Ban kinh: " << R << endl;
}

double CDuongTron::C() { return 2 * 3.14 * R; }
double CDuongTron::S() { return 3.14 * R * R; }
