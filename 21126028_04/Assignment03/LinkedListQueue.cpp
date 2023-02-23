#include "LinkedListQueue.h"
#include <stack>
#include <queue>
using namespace std;

Node* LinkedListQueue::CreateNode(int key){
    Node *newNode = new Node;
    newNode->key = key;
    newNode->next = NULL;
    return newNode;
}

void LinkedListQueue::init(int capacity){
    head =tail = NULL;
    num = 0;
    this->capacity = capacity;
}

void LinkedListQueue::enqueue(int key){
    Node *newNode = CreateNode(key);
    if (head == NULL){
        head = tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
    num++;
}
void LinkedListQueue::prush(int key){
    Node *newNode = CreateNode(key);
    if (head == NULL){
        head = tail = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
    num++;
}
int LinkedListQueue::dequeue(){
    Node *p = head;
    if(head == tail){
        head = NULL;
        tail = NULL;
    }

    else if(head != NULL){
        head = p->next;
        p->next == NULL;
    }
    int data = p->key;
    delete p;
    return data;
}
int LinkedListQueue::peek(){
    return head->key;
}

bool LinkedListQueue::isEmpty(){
    return num == 0;
}
bool LinkedListQueue::isFull(){
    if(capacity == num)
        return true;
    return false;
}

void LinkedListQueue::clear(){
    while(head != NULL && tail != NULL)
        dequeue();
        
        }
void LinkedListQueue::print(){
    Node *Temp = head;
    while (Temp != NULL){
        cout << Temp->key << " ";
        Temp = Temp->next;
    }
    cout << endl;
}









