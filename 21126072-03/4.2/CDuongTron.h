
#include <string.h>
#include <cstring>
#include <iostream>
using namespace std;
class CDiem{
    private:
        int x;
        int y;
    public:
    //constructor
    CDiem();
    CDiem(int x,int y); 
    
    CDiem(const CDiem& t);
    //destructor
    ~CDiem();
    //getter
    int get_x();
    int get_y();
    //setter
    void set_x(int x);
    void set_y(int y);
    void input();
    void output();
    
    
};
class CDuongTron
{
private:
    CDiem O;
    double ban_kinh;
public:
     CDuongTron();
     CDuongTron(double ban_kinh);
     CDuongTron(const CDuongTron &dt);
     ~CDuongTron();
     //getter
        CDiem get_O();
        double get_ban_kinh();
        //setter
        void set_O(CDiem O);
        void set_ban_kinh(double ban_kinh);
        void input();
        void output();
        // tinh chu vi duong tron
        double chu_vi();
        double dien_tich();
        
     
    };


