#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<cstring>
#include "CHocSinh.h"
using namespace std;


int main(){
    vector<CHocSinh> listStudent;
    CHocSinh hs;
    hs.inputListStudent(listStudent);
    hs.outputListStudent(listStudent);
    hs.findStudentDiemTBMax(listStudent);
    hs.sortListStudentAscending(listStudent);
    hs.sortListStudentDescending(listStudent);
    hs.findStudentFromNameOrId(listStudent);
    return 0;
    

}