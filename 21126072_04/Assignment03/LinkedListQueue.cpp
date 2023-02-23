#include "LinkedListQueue.h"
#include <stack>
#include <queue>
using namespace std;

Node* LinkedListQueue::CreateNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void LinkedListQueue::init(int capacity){
    head = NULL;
    tail = NULL;
    num = 0;
    this->capacity = capacity;
}

void LinkedListQueue::enqueue(int data){
    Node *newNode = CreateNode(data);
    if (head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
    num++;
}
void LinkedListQueue::prush(int data){
    Node *newNode = CreateNode(data);
    if (head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
    num++;
}
int LinkedListQueue::dequeue(){
    Node *temp = head;
    int data = temp->data;
    head = head->next;
    delete temp;
    num--;
    return data;
}
int LinkedListQueue::peek(){
    return head->data;
}

bool LinkedListQueue::isEmpty(){
    return num == 0;
}
bool LinkedListQueue::isFull(){
    return num == capacity;
}

void LinkedListQueue::clear(){
    Node *temp = head;
    while (temp != NULL){
        head = head->next;
        delete temp;
        temp = head;
    }
    num = 0;
}
void LinkedListQueue::printlist(){
    Node *temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}









