#include "header.h"

void initStack(Stack& stack) { stack.top = NULL; }

bool isEmpty(Stack stack) {
  if (stack.top == NULL) {
    return true;
  } else {
    return false;
  }
}

Nodeptr taoNode(TYPE_INFO x) {
  Nodeptr p;

  p = new Node;
  p->data = x;
  p->link = NULL;

  return p;
}

void push(Stack& stack, TYPE_INFO x) {
  Nodeptr p;
  p = taoNode(x);
  if (isEmpty(stack))
    stack.top = p;
  else {
    p->link = stack.top;
    stack.top = p;
  }
}

void inputStack(Stack& stack) {
  int x;
  do {
    cout << "\ninput (press 0 to close) = ";
    cin >> x;
    if (x != 0) {
      push(stack, x);
    }
  } while (x != 0);
}

void outputStack(Stack stack) {
  Nodeptr p = stack.top;

  // TYPE_INFO array[100];
  // int i = 0;

  while (p != NULL) {
    cout << p->data << " ";
    // array[i] = p->data;
    // i++;
    p = p->link;
  }

  // while (i != -1) {
  // cout << array[i] << " ";
  // i--;
  // }
}

int pop(Stack& stack) {
  Nodeptr p;
  TYPE_INFO x;

  p = stack.top;
  stack.top = p->link;
  x = p->data;
  delete p;

  return x;
}

int top(Stack stack) {
  Nodeptr p = stack.top;
  TYPE_INFO x;

  while (p != NULL) {
    x = p->data;
    p = p->link;
  }

  return x;
}

int sum(Stack stack) {
  TYPE_INFO sum = 0;
  Nodeptr p = stack.top;

  while (p != NULL) {
    sum += p->data;
    p = p->link;
  }

  return sum;
}
