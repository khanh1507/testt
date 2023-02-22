#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<cstring>
#include "CHocSinh.h"
using namespace std;


int main(){
    CHocSinh hs1;
    hs1.input();
    cout<<endl;
    hs1.output();
    cout<<endl;
    cout << "------------------\n";
    cout << "nhap danh sach hoc sinh \n";
    Cclass lop1;
    lop1.input();
    lop1.output();
    cout<<"------------------\n";
    cout<<"HOC SINH CO DIEM TB CAO NHAT\n";
    lop1.find_student_DTB_max(hs1.getDiemTB()); 
    cout<<"------------------\n";
    
    cout<<"sap xep theo ten tang dan theo ten";
    lop1.sort_ascending_name();
    lop1.output();
    
    cout<<"sap xep theo ten giam dan theo ten";
    lop1.sort_descending_name();
    lop1.output();
    
    cout<<"sap xep theo diem trung binh tang dan";
    lop1.sort_ascending_diemTB();
    lop1.output();
    
    cout<<"sap xep theo diem trung binh giam dan";
    lop1.sort_ascending_diemTB();
    lop1.output();
    
    cout<<"tim kiem hoc sinh theo ten => ";
    lop1.find_student_by_name(hs1.getName()).output(); 
    
    
    cout<<"tim kiem hoc sinh theo diem id => ";
    lop1.find_student_by_id(hs1.getId()).output();
  
    
    
    return 0;
    

}