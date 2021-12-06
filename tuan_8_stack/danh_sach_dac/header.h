#include <cmath>
#include <iostream>
using namespace std;

#define MAX_STACK 100

typedef int TYPE;

struct Stack {
  int top;
  TYPE elem[MAX_STACK];
};

void initStack(Stack& stack);
bool isEmpty(Stack stack);
bool isFull(Stack stack);
void push(Stack& stack, int x);
void inputStack(Stack& stack);
void outputStack(Stack stack);
int pop(Stack& stack);
int top(Stack stack);
