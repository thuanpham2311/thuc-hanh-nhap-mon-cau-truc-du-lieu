#include <cmath>
#include <iostream>
using namespace std;

const int MAX = 2;

typedef int type;
struct Queue {
  int front, rear;
  int elem[MAX];
};

void init(Queue& q);
int isEmpty(Queue queue);
int isFull(Queue queue);
void enQueue(Queue& queue, type x);
void print(Queue queue);
void setValue(Queue& q);
void deQueue(Queue& q);
int getFront(Queue queue);
