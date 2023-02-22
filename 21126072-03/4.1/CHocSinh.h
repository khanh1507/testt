
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
  void setDiemTB(double diemTB);
  string xeploai(double diemTB);
  
  
};

class Cclass{
  private:
    vector<CHocSinh> list;
  public:
    void input();
    void output();
    void swap_student(CHocSinh &a,CHocSinh &b);
    
    void find_student_DTB_max(double diemTB);
    void sort_ascending_name();
    void sort_descending_name();
    void sort_ascending_diemTB();
    void sort_descending_diemTB();
    CHocSinh find_student_by_name(char* name);
    CHocSinh find_student_by_id(char* id);
};
