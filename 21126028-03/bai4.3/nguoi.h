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

  int getDay();
  int getMonth();
  int getYear();
  void setDay(int day);
  void setMonth(int month);
  void setYear(int year);
  void input();
  void output();
};

class nguoi {
private:
  char *name;
  date born;

public:
  nguoi();
  nguoi(char *name);
  nguoi(const char *name, date born);
  ~nguoi();
  // setter
  date getDay();
  char *getName();
  void setDay(date born);
  void input();
  void output();

  int tuoi(date day_now);
};
