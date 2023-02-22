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
            cout<<"da huy";
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
        // input list student
        void CHocSinh::inputListStudent(vector<CHocSinh> &listStudent){
            int n;
            cout<<"Nhap so hoc sinh: ";
            cin>>n;
            for(int i = 0; i < n; i++){
                CHocSinh hs;
                hs.input();
                listStudent.push_back(hs);
            }
        }
        // output list student
        void CHocSinh::outputListStudent(vector<CHocSinh> &listStudent){
            for(int i = 0; i < listStudent.size(); i++){
                listStudent[i].output();
            }
        }
        // find student diem tb max
        void CHocSinh::findStudentDiemTBMax(vector<CHocSinh> &listStudent){
            double max = listStudent[0].getDiemTB();
            int index = 0;
            for(int i = 1; i < listStudent.size(); i++){
                if(listStudent[i].getDiemTB() > max){
                    max = listStudent[i].getDiemTB();
                    index = i;
                }
            }
            cout<<"Hoc sinh co diem trung binh cao nhat la: "<<endl;
            listStudent[index].output();
        }
      
        void CHocSinh::sortListStudentAscending(vector<CHocSinh> &listStudent){
            for(int i = 0; i < listStudent.size() - 1; i++){
                for(int j = i + 1; j < listStudent.size(); j++){
                    if(listStudent[i].getDiemTB() > listStudent[j].getDiemTB()){
                        CHocSinh temp = listStudent[i];
                        listStudent[i] = listStudent[j];
                        listStudent[j] = temp;
                    }
                }
            }
        }
        void CHocSinh::sortListStudentDescending(vector<CHocSinh> &listStudent){
            for(int i = 0; i < listStudent.size() - 1; i++){
                for(int j = i + 1; j < listStudent.size(); j++){
                    if(listStudent[i].getDiemTB() < listStudent[j].getDiemTB()){
                        CHocSinh temp = listStudent[i];
                        listStudent[i] = listStudent[j];
                        listStudent[j] = temp;
                    }
                }
            }
        }
        

void CHocSinh::findStudentFromNameOrId(vector<CHocSinh> &listStudent){
    char* name;
    char* id;
    cout<<"Nhap ten hoc sinh can tim: ";
    cin.ignore();
    cin.getline(name,20);
    cout<<"Nhap id hoc sinh can tim: ";
    cin.ignore();
    cin.getline(id,20);
    for(int i = 0; i < listStudent.size(); i++){
        if(strcmp(listStudent[i].name, name) == 0 && listStudent[i].id == id){
            cout<<"Hoc sinh can tim la: "<<endl;
            listStudent[i].output();
            return;
        }
    }
    cout<<"Khong tim thay hoc sinh"<<endl;
}
        


