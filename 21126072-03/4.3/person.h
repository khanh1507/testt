#include <cstring>
#include <iostream>
#include <string>
using namespace std;

class date {
private:
  int day;
  int month;
  int year;

public:
  date();
  date(int day, int month, int year);
  date(const date &d);
  ~date();

  // getter/setter
  int getDay();
  int getMonth();
  int getYear();
  void setDay(int day);
  void setMonth(int month);
  void setYear(int year);
  void input();
  void output();
};

class person {
private:
  char *name;
  date birthday;

public:
  person();
  person(char *name);
  person(const char *name, date birthday);
  ~person();
  // setter
  date getDay();
  char *getName();
  void setDay(date birthday);
  void input();
  void output();

  int age(date day_now);
};
