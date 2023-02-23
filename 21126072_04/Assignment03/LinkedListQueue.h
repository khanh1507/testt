#include<iostream>
using namespace std;
 struct Node {
    int data;
    Node *next;
  };
class LinkedListQueue {
private:
 
  Node *head;
  Node *tail;
  int capacity; // max number of elements in the queue
  int num;      // current number of elements in the queue
  Node* CreateNode(int data);
public:
  //LinkedListQueue();
  //LinkedListQueue(int capacity);
  //LinkedListQueue(const LinkedListQueue &other);
   //~LinkedListQueue();

   void init(int capacity);
   void enqueue(int data);
   void prush(int data);
   int dequeue();
   int  peek();
   bool isEmpty();
   bool isFull();
   void clear();
   void printlist();
 
};
