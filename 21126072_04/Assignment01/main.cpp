
#include<iostream>
#include "Fraction.h"


using namespace std;
int main(){
    Fraction ft,p,h,add,sub,mul,div,com;
    cout<<"enter the first fraction \n";
    ft.Input();
    cout<<" phan so vua nhap la : ";
    ft.Output();
    
    p.create(2,4);
    cout<<"f1:";
    p.Output();
    
    h.create(6,7);
    cout<<"f2:";
    h.Output();
    cout<<"addition :";
    add = p.Add(h);
    add.Output();
    cout<<"substract :";
    sub = p.Substract(h);
    sub.Output();
    cout<<"multiply :";
    mul =p.Multiply(h);
    mul.Output();
    cout<<"divide :";
    div =p.Divide(h);
    div.Output();
     
     
    if (p.Compare(h) ){
      cout<<"the fraction first than biger \n";
      
    }
    else if(p.Compare(h)== -1) {
        
        cout<<"the fraction first than smaller \n";
    }
    else {
    cout<<" equad ";
    }
    if (p.IsPositive()){
    cout<< "ispositive";
    }
    else if(p.IsNegative()){
    cout<<"Isnegative";
    }
    else if(p.IsZero()){
        cout<<"zero";
    }
    
    return 0;
    
    
    
}