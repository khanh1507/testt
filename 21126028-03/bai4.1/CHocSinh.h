
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
 
  CHocSinh();
  CHocSinh(char *name, char *address, char *id, double diem_toan,
           double diem_van);
  CHocSinh(const CHocSinh &sh);
  
  ~CHocSinh();
  void input();
  void output();
  char* getName();
        
  char* getAddress();
  char* getId();
  void assign(char* name, char* address, char* id, double diem_toan,
              double diem_van);
  double getDiemTB();
 
  void inputListStudent(vector<CHocSinh> &listStudent);
 
  void outputListStudent(vector<CHocSinh> &listStudent);
  
  void findStudentDiemTBMax(vector<CHocSinh> &listStudent);
  
  void sortListStudentAscending(vector<CHocSinh> &listStudent);
  void sortListStudentDescending(vector<CHocSinh> &listStudent);

  void findStudentFromNameOrId(vector<CHocSinh> &listStudent);
};

class Cclass{
  private:
    vector<CHocSinh> list;
  public:
    
};
