#include<iostream>
#include "CDuongTron.h"
using namespace std;
int main(){
    CDuongTron dtron;
    dtron.input();
    dtron.output();
    cout<<"C : "<<dtron.C()<<endl;
    cout<<"S : "<<dtron.S();
    return 0;
}