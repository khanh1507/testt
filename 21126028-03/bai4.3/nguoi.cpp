#include "nguoi.h"
#include <iostream>

using namespace std;

date::date() {
  day = 0;
  month = 0;
  year = 0;
}
date::date(int day, int month, int year) {
  this->day = day;
  this->month = month;
  this->year = year;
}
date::date(const date &d) {
  this->day = d.day;
  this->month = d.month;
  this->year = d.year;
}
date::~date() {
  day = 0;
  month = 0;
  year = 0;
  
}


int date::getDay() { return day; }
int date::getMonth() { return month; }
int date::getYear() { return year; }
void date::setDay(int day) { this->day = day; }
void date::setMonth(int month) { this->month = month; }
void date::setYear(int year) { this->year = year; }
void date::input() {
  cout << "enter day: ";
  cin >> day;
  cout << "enter month: ";
  cin >> month;
  cout << "enter year: ";
  cin >> year;
}
void date::output() {
  cout << " day" << day;
  cout << " month" << month;
  cout << " year" << year << endl;
}

nguoi::nguoi() { name = NULL; }
nguoi::nguoi(char *name) { this->name = name; }
nguoi::nguoi(const char *name, date born) {
  this->name = new char[strlen(name) + 1];
  strcpy(this->name, name);
  this->born = born;
}
nguoi::~nguoi() {
  name = NULL;
  cout << "da huy nguoi" << endl;
}
// setter
date nguoi::getDay() { return born; }
char *nguoi::getName() { return name; }
void nguoi::setDay(date born) { this->born = born; }
void nguoi::input() {
  char *name = new char[100];
  cout << "Nhap ten: ";
  cin.getline(name, 100);
  this->name = name;
  born.input();
}

void nguoi::output() {
  cout << "Ten: " << name << endl;
  born.output();
}

// tinh tuoi
int nguoi::tuoi(date day_now) {
  int tuoi = day_now.getYear() - born.getYear();
  
  return tuoi;
}
