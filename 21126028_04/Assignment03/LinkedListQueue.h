#include<iostream>
using namespace std;
 struct Node {
    int key;
    Node *next;
  };
class LinkedListQueue {
private:
 
  Node *head;
  Node *tail;
  int capacity; 
  int num;      
  Node* CreateNode(int key);
public:
  

   void init(int capacity);
   void enqueue(int key);
   void prush(int key);
   int dequeue();
   int  peek();
   bool isEmpty();
   bool isFull();
   void clear();
   void print();
 
};
