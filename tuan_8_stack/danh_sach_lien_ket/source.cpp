#include "header.h"

void initStack(Stack& stack) { stack.top = NULL; }

bool isEmpty(Stack stack) {
  if (stack.top == NULL) {
    return true;
  } else {
    return false;
  }
}

Nodeptr taoNode(TYPEINFO x) {
  Nodeptr p;

  p = new Node;
  p->data = x;
  p->link = NULL;

  return p;
}

void push(Stack& stack, TYPEINFO x) {
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
  while (p != NULL) {
    cout << p->data << " ";
    p = p->link;
  }
}

int pop(Stack& stack) {
  Nodeptr p;
  TYPEINFO x;

  if (isEmpty(stack) == false) {
    p = stack.top;
    stack.top = p->link;
    x = p->data;
    delete p;
    return x;
  }

  return x;
}

int top(Stack& stack) {
  Nodeptr p = stack.top;
  return p->data;
}
