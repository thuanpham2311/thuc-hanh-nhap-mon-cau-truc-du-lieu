#include <cmath>
#include <iostream>
using namespace std;

#define MAX_STACK 100

typedef int TYPE;

struct Stack {
  int stackPointer;
  TYPE elem[MAX_STACK];
};

void initStack(Stack &stack);
bool isEmpty(Stack stack);
