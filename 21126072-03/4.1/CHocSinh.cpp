#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "CHocSinh.h"
using namespace std;

      CHocSinh::CHocSinh(){
          name = new char[100];
          address = new char[100];
          id = new char[100];
      }
      CHocSinh::CHocSinh(char *name, char *address, char *id, double diem_toan, double diem_van){
          this->name = new char[100];
          this->address = new char[100];
          this->id = new char[100];
          strcpy(this->name, name);
          strcpy(this->address, address);
          strcpy(this->id, id);
          this->diem_toan = diem_toan;
          this->diem_van = diem_van;
      }
      CHocSinh::CHocSinh(const CHocSinh& sh){
            this->name = new char[100];
            this->address = new char[100];
            this->id = new char[100];
            strcpy(this->name, sh.name);
            strcpy(this->address, sh.address);
            strcpy(this->id, sh.id);
            this->diem_toan = sh.diem_toan;
            this->diem_van = sh.diem_van;
      }
        //destructor
        CHocSinh::~CHocSinh(){
            delete []name;
            delete []address;
            delete []id;
            //cout<<"da huy";
            cout<<endl;
        }
       void CHocSinh::input(){
            cout<<"Nhap ten hoc sinh: ";
            cin.getline( name,20);
            cout<<"Nhap dia chi: ";
            cin.getline( address,20);
            cout<<"Nhap id: ";
            cin.getline(id,8);
            cout<<"Nhap diem toan: ";
            cin>>diem_toan;
            cin.ignore(); 
            cout<<"Nhap diem van: ";
            cin>>diem_van;
        } 
        void CHocSinh::output(){
            cout<<"Ten hoc sinh: "<<name<<endl;
            cout<<"Dia chi: "<<address<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Diem toan: "<<diem_toan<<endl;
            cout<<"Diem van: "<<diem_van<<endl;
            cout<<"xep loai: "<<xeploai(getDiemTB())<<endl;
            cout<<"-----------\n";
            
        }
        char* CHocSinh::getName(){
            return name;
        }
        
        char* CHocSinh::getAddress(){
            return address;
        }
        
        char* CHocSinh::getId(){
            return id;
        }
        void CHocSinh::assign(char* name, char* address, char* id, double diem_toan, double diem_van){
            strcpy(this->name, name);
            strcpy(this->address, address);
            strcpy(this->id, id);
            this->diem_toan = diem_toan;
            this->diem_van = diem_van;
        }
        double CHocSinh::getDiemTB(){
            return (diem_toan + diem_van)/2;
        }
        void CHocSinh::setDiemTB(double diemTB){
            cout<<"setDiemTB: ";
            if(diemTB >= 8){
                cout<<"gio\ni";
            }
            else if(diemTB >= 7){
                cout<<"kha\n";
            }
            else if(diemTB >= 5){
                cout<<"trung binh\n";
            }
            else if(diemTB >5){
                cout<<"yeu\n";
            }
        } 
        string CHocSinh::xeploai(double diemTB){
            if(diemTB >= 8){
                return "gioi";
            }
            else if(diemTB >= 7){
                return "kha";
            }
            else if(diemTB >= 5){
                return "trung binh";
            }
            else if(diemTB >5){
                return "yeu";
            }
        }



        void Cclass::input(){
            int n;
            cout<<"Nhap so hoc sinh: \n";
            cin>>n;
            
            for(int i = 0; i < n; i++){
                cin.ignore();
                CHocSinh hs;
                hs.input();
                list.push_back(hs);
            }
        }
        void Cclass::output(){
            for(int i = 0; i < list.size(); i++){
                list[i].output();
            }
        }
        void Cclass::swap_student(CHocSinh &a,CHocSinh &b){
            CHocSinh temp;
            temp.assign(a.getName(), a.getAddress(), a.getId(), a.getDiemTB(), a.getDiemTB());
            a.assign(b.getName(), b.getAddress(), b.getId(), b.getDiemTB(), b.getDiemTB());
            b.assign(temp.getName(), temp.getAddress(), temp.getId(), temp.getDiemTB(), temp.getDiemTB());
        }
        
        void Cclass::find_student_DTB_max(double diemTB){
            for(int i = 0; i < list.size(); i++){
                if(list[i].getDiemTB() == diemTB){
                    list[i].output();
                }
            }
            cout<<"diem trung binh max: "<<diemTB<<endl;
        }
        
        
        void Cclass::sort_ascending_name(){
            for(int i = 0; i < list.size() - 1; i++){
                for(int j = i + 1; j < list.size(); j++){
                    if(strcmp(list[i].getName(), list[j].getName()) > 0){
                        swap_student(list[i], list[j]);    
                    }
                }
            }
        }
        
        void Cclass::sort_descending_name(){
            for(int i = 0; i < list.size() - 1; i++){
                for(int j = i + 1; j < list.size(); j++){
                    if(strcmp(list[i].getName(), list[j].getName()) < 0){
                        swap_student(list[i], list[j]);
                    }
                }
            }
        }
        
        void Cclass::sort_ascending_diemTB(){
            for(int i = 0; i < list.size() - 1; i++){
                for(int j = i + 1; j < list.size(); j++){
                    if(list[i].getDiemTB() > list[j].getDiemTB()){
                        swap_student(list[i], list[j]);
                    }
                }
            }
        }
        
        void Cclass::sort_descending_diemTB(){
            for(int i = 0; i < list.size() - 1; i++){
                for(int j = i + 1; j < list.size(); j++){
                    if(list[i].getDiemTB() < list[j].getDiemTB()){
                        swap_student(list[i], list[j]);
                    }
                }
            }
        }
        
        CHocSinh Cclass::find_student_by_name(char* name){ 
            cout<<"enter name: ";
            cin.ignore();
            cin.getline(name,20);
            for(int i = 0; i < list.size(); i++){
                if(strcmp(list[i].getName(), name) == 0){
                    return list[i];
                }
            }
            return CHocSinh();
        }
        CHocSinh Cclass::find_student_by_id(char* id){ 
            cout<<"enter id: ";
            cin.ignore();
            cin.getline(id,8);
            for(int i = 0; i < list.size(); i++){
                if(strcmp(list[i].getId(), id) == 0){
                    return list[i];
                }
            }
            return CHocSinh();
        }
        

