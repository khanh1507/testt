#include <string>
#include <vector>
#include <iostream>
#include"person.h"
using namespace std;



        date::date(){
            day = 0;
            month = 0;
            year = 0;
        }
        date::date(int day, int month, int year){
            this->day = day;
            this->month = month;
            this->year = year;
        }
        date::date(const date &d){
            this->day = d.day;
            this->month = d.month;
            this->year = d.year;
        }
        date::~date(){
            day = 0;
            month = 0;
            year = 0;
            cout<<"da huy date"<<endl;
        }
        
        //getter/setter
        int date::getDay(){
            return day;
        }
        int date::getMonth(){
            return month;
        }
        int date::getYear(){
            return year;
        }
        void date::setDay(int day){
            this->day = day;
        }
        void date::setMonth(int month){
            this->month = month;
        }
        void date::setYear(int year){
            this->year = year;
        }
        void date::input(){
            cout<<"Nhap ngay: ";
            cin>>day;
            cout<<"Nhap thang: ";
            cin>>month;
            cout<<"Nhap nam: ";
            cin>>year;
        }
        void date::output(){
            cout<<" Ngay"<<day;
            cout<<" /Thang"<<month;
            cout<<" /Nam"<<year<<endl;
        }
        
        






        person::person(){
            name = NULL;
            
        }
        person::person(char *name){
            this->name = name;
        }
        person::person(const char *name, date birthday){
            this->name = new char[strlen(name)+1];
            strcpy(this->name, name);
            this->birthday = birthday;
        }
        person::~person(){
            name = NULL;
            cout<<"da huy person"<<endl;
        }
        //setter
        date person::getDay(){
            return  birthday;
        }
        char *person::getName(){
            return name;
        }
        void person::setDay(date birthday){
            this->birthday = birthday;
        }
        void person::input(){
            char *name = new char[100];
            cout<<"Nhap ten: ";
            cin.getline(name, 100);
            this->name = name;
            birthday.input();
        }
        void person::output(){
            cout<<"Ten: "<<name<<endl;
            birthday.output();
        }
        
        
        int person::age(date day_now){
            int age = day_now.getYear() - birthday.getYear();
            if(day_now.getMonth() < birthday.getMonth()){
                age--;
            }else if(day_now.getMonth() == birthday.getMonth()){
                if(day_now.getDay() < birthday.getDay()){
                    age--;
                }
            }
            return age;
        }
        
