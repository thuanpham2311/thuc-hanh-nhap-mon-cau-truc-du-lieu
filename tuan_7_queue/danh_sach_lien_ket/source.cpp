#include "header.h"

void init(Queue &q) {
  q.front = NULL;
  q.rear = NULL;
}

int isEmpty(Queue q) {
  if (q.front == NULL) return 1;
  return 0;
}

Nodeptr taoNode(TYPE_INFO x) {
  Nodeptr p;
  p = new Node;
  p->data = x;
  p->link = NULL;
  return p;
}

void enQueue(Queue &q, TYPE_INFO x) {
  Nodeptr p;
  p = taoNode(x);
  if (isEmpty(q)) {
    q.front = p;
    q.rear = p;
  } else {
    q.rear->link = p;
    q.rear = p;
  }
}

void setValue(Queue &q) {
  int x;
  while (true) {
    cout << "\nNhập danh sách vào queue (nhập -99 để thoát): ";
    cin >> x;
    if (x == -99) {
      break;
    }
    enQueue(q, x);
  }
}

void print(Queue q) {
  Nodeptr p;
  p = q.front;
  while (p != NULL) {
    cout << p->data << " ";
    p = p->link;
  }
}

void deQueue(Queue &q) {
  if (isEmpty(q) != -1) {
    Nodeptr p = q.front;
    q.front = p->link;
    TYPE_INFO t = p->data;
    delete p;
  }
}

TYPE_INFO getFront(Queue q) { return q.front->data; }
