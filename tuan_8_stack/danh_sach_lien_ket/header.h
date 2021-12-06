#include <cmath>
#include <iostream>
using namespace std;

typedef int TYPEINFO;

struct Node {
  TYPEINFO data;
  Node *link;
};

typedef Node *Nodeptr;

struct Stack {
  Nodeptr top;
};

void initStack(Stack &stack);
bool isEmpty(Stack stack);
Nodeptr taoNode(TYPEINFO x);
void push(Stack &stack, TYPEINFO x);
int pop(Stack &stack);
int top(Stack &stack);
void inputStack(Stack &stack);
void outputStack(Stack stack);
int top(Stack &stack);
