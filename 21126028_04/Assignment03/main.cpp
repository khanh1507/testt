#include "LinkedListQueue.h"
#include <iostream>
#include <queue>


using namespace std;

int main() {
    LinkedListQueue L;
    int cap;
    cout<<"Enter the capacity: ";
    cin >> cap;
    L.init(cap);
    L.enqueue(1);
    L.enqueue(2);
    L.enqueue(3);
    L.enqueue(4);
    L.enqueue(5);
    L.enqueue(6);
    L.enqueue(7);
    L.enqueue(8);
    L.enqueue(9);
    L.enqueue(10);
    L.print();
    cout<<"lay ra phan tu dau tien: "<<L.dequeue()<<endl;
    cout<<"peek phan tu dau tien: "<<L.peek()<<endl;
    cout << "\nKiem tra danh sach rong ==> ";
    if(L.isEmpty() == true)
        cout << "RONG.\n";
    else
        cout << "KHONG RONG.\n";

    cout << "\nKiem tra danh sach day ==> ";
    if(L.isFull() == true)
        cout << "DAY.\n";
    else
        cout << "VAN CON DUNG LUONG.\n";
    
    cout << "Xoa danh sach.\n";
    L.clear();
    L.print();
  
}
