
#include <cstring>
#include <string>

using namespace std;
class CHocSinh {
private:
  char *name;

  char *address;
  char *id;
  double diem_toan;
  double diem_van;

public:
  // constructor
  CHocSinh();
  CHocSinh(char *name, char *address, char *id, double diem_toan,
           double diem_van);
  CHocSinh(const CHocSinh &sh);
  // destructor
  ~CHocSinh();
  void input();
  void output();
  char* getName();
        
  char* getAddress();
  char* getId();
  void assign(char* name, char* address, char* id, double diem_toan,
              double diem_van);
  double getDiemTB();
  // input list student
  void inputListStudent(vector<CHocSinh> &listStudent);
  // output list student
  void outputListStudent(vector<CHocSinh> &listStudent);
  // find student diem tb max
  void findStudentDiemTBMax(vector<CHocSinh> &listStudent);
  // sort list student  ascending
  void sortListStudentAscending(vector<CHocSinh> &listStudent);
  void sortListStudentDescending(vector<CHocSinh> &listStudent);

  void findStudentFromNameOrId(vector<CHocSinh> &listStudent);
};

class Cclass{};
