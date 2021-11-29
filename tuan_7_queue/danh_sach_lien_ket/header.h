#include <cmath>
#include <iostream>
using namespace std;

typedef int TYPE_INFO;

struct Node {
  int data;
  Node* link;
};

typedef struct Node* Nodeptr;

struct Queue {
  Nodeptr front, rear;
};

void init(Queue& q);
int isEmpty(Queue q);
Nodeptr taoNode(TYPE_INFO x);
void enQueue(Queue& q, TYPE_INFO x);
void setValue(Queue& q);
void print(Queue q);
void deQueue(Queue& q);
TYPE_INFO getFront(Queue q);
