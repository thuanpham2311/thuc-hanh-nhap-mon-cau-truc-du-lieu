#include <cmath>
#include <iostream>
using namespace std;

typedef int TYPE_INFO;

struct Node {
  TYPE_INFO data;
  Node *link;
};

typedef Node *Nodeptr;

struct Stack {
  Nodeptr top;
};

void initStack(Stack &stack);
bool isEmpty(Stack stack);
Nodeptr taoNode(TYPE_INFO x);
void push(Stack &stack, TYPE_INFO x);
int pop(Stack &stack);
void inputStack(Stack &stack);
void outputStack(Stack stack);
int top(Stack stack);
int sum(Stack stack);
