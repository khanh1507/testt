#include "nguoi.h"
#include <iostream>
using namespace std;

int main() {
  date d1, d2;
  nguoi p;
  p.input();
  p.output();

  d1.input();

  d1.output();

  cout << p.tuoi(d1) << endl;

  return 0;
}
