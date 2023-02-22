#include <string>
#include <vector>
#include <iostream>
#include "CDuongTron.h"

using namespace std;

//constructor
    CDiem::CDiem(){
        x=0;
        y=0;
    }
    CDiem::CDiem(int x,int y){
        this->x=x;
        this->y=y;
    }
    CDiem::CDiem(const CDiem& t){
        this->x=t.x;
        this->y=t.y;
    }
    //destructor
    CDiem::~CDiem(){
        x=0;
        y=0;
        cout<<"da huy diem";
    }
    //getter
    int CDiem::get_x(){
        return x;
    }
    int CDiem::get_y(){
        return y;
    }
    //setter
    void CDiem::set_x(int x){
        this->x=x;
    }
    void CDiem::set_y(int y){
        this->y=y;
    }
    void CDiem::input(){
        cout<<"Nhap x: ";
        cin>>x;
        cout<<"Nhap y: ";
        cin>>y;
    }
    void CDiem::output(){
        cout<<" x="<<x;
        cout<<" y="<<y;
    }
    
    
    
    
    
CDuongTron::CDuongTron(){
            ban_kinh=0;
     }
     CDuongTron::CDuongTron(double ban_kinh){
         this->ban_kinh=ban_kinh;
     }
     CDuongTron::CDuongTron(const CDuongTron &dt){
         this->ban_kinh=dt.ban_kinh;
     }
     CDuongTron::~CDuongTron(){
         ban_kinh=0;
         cout<<"da huy duong tron";cout<<endl;
     }
     //getter
        CDiem CDuongTron::get_O(){
            return O;
        }
    double CDuongTron::get_ban_kinh(){
            return ban_kinh;
        }
        //setter
        void CDuongTron::set_O(CDiem O){
            this->O=O;
        }
        void CDuongTron::set_ban_kinh(double ban_kinh){
            this->ban_kinh=ban_kinh;
        }
        void CDuongTron::input(){
            cout<<"Nhap toa do tam O: \n";
            O.input();
            cout<<"Nhap ban kinh: ";
            cin>>ban_kinh;
        }
        void CDuongTron::output(){
            cout<<"Toa do tam O: ";
            O.output();
            cout<<" Ban kinh="<<ban_kinh<<endl;
        }
        // tinh chu vi duong tron
        double CDuongTron::chu_vi(){
            return 2*3.14*ban_kinh;
        }
        double CDuongTron::dien_tich(){
            return 3.14*ban_kinh*ban_kinh;
        }
        
     
