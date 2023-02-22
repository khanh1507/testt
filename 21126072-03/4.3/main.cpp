#include "person.h"
#include <iostream>
using namespace std;

//      g++ person.cpp main.cpp -o main 
int main() {
  date day_now, day_born;
  person p;
  p.input();
  p.output();
  cout<<"Ngay hom nay \n";
  day_now.input();
  cout<<" Hom nay la ";
  day_now.output(); 
  cout << " Tuoi cua ban tinh den ngay hom nay la ";
  cout<<p.age(day_now)<<endl;
  
  
  return 0;
}
