#include<iostream>
#include "CDuongTron.h"
using namespace std;
int main(){
    CDuongTron dt;
    dt.input();
    dt.output();
    cout<<"Chu vi duong tron la: "<<dt.chu_vi()<<endl;
    cout<<"dien tich duong tron la: "<<dt.dien_tich()<<endl;
    return 0;
}