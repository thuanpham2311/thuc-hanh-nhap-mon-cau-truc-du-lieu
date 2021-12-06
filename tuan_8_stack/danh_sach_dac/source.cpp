#include "header.h"

void initStack(Stack& stack) { stack.top = -1; }

bool isEmpty(Stack stack) {
  if (stack.top == -1) {
    return true;
  } else {
    return false;
  }
}

bool isFull(Stack stack) {
  if (stack.top == MAX_STACK - 1) {
    return true;
  } else {
    return false;
  }
}

void push(Stack& stack, int x) {
  if (isFull(stack) == true) {
    cout << "\nStack đầy";
  } else {
    stack.top++;
    stack.elem[stack.top] = x;
  }
}

void inputStack(Stack& stack) {
  int x;
  do {
    cout << "\ninput (press 0 to  close) = ";
    cin >> x;
    if (x != 0) {
      push(stack, x);
    }
  } while (isFull(stack) == false && x != 0);
}

void outputStack(Stack stack) {
  for (int i = 0; i <= stack.top; i++) {
    cout << stack.elem[i] << " ";
  }
}

int pop(Stack& stack) {
  int x;
  if (isEmpty(stack) == false) {
    x = stack.elem[stack.top];
    stack.top--;
  }
  return x;
}

int top(Stack stack) {
  int x;
  if (isEmpty(stack) == true) {
    return -1;
  } else {
    x = stack.elem[0];
    stack.top--;
  }
  return x;
}

int sum(Stack stack) {
  TYPE sum = 0;
  for (int i = 0; i <= stack.top; i++) {
    sum += stack.elem[i];
  }
  return sum;
}
