#include "LinkedListQueue.h"
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
  LinkedListQueue q;
  int maxl;
  cout << "enter max list:";
  cin >> maxl;
  q.init(maxl);
  q.enqueue(1);
  q.enqueue(11);
  q.enqueue(3);
  q.enqueue(8);
  q.enqueue(6);
  q.enqueue(-7);
  q.enqueue(6);
  q.enqueue(5);
  q.printlist();
  cout << "get the  output queue element:" << q.dequeue() << endl;
  cout << "peek the output queue element:" << q.peek() << endl;
  cout << " test if the queue is empty:";
  if (q.isEmpty()) {
    cout << "the queue is empty" << endl;
  } else {
    cout << "the queue is not empty" << endl;
  }
  cout << " test if the queue is full:";
  if (q.isFull()) {
    cout << "the queue is full" << endl;
  } else {
    cout << "the queue is not full" << endl;
  }
  cout << "delete the queue" << endl;
  q.clear();
  q.printlist();
  return 0;
}
