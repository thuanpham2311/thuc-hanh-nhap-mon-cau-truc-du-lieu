#include "header.h"

void init(Queue& queue) {
  queue.front = -1;
  queue.rear = -1;
}

int isEmpty(Queue queue) {
  if (queue.front == -1) {
    return 1;
  }

  return 0;
}

int isFull(Queue queue) { return queue.front - queue.rear == MAX - 1; }

// @todo : fix?
void enQueue(Queue& queue, type x) {
  if (queue.front - queue.rear != MAX - 1) {
    if (queue.front == -1) {
      queue.front = 0;
    } else if (queue.rear == MAX - 1) {
      for (int i = queue.front; i <= queue.rear; i++) {
        queue.elem[i - queue.front] = queue.elem[i];
      }
      queue.rear = MAX - 1 - queue.front;
      queue.front = 0;
    }
    queue.rear++;
    queue.elem[queue.rear] = x;
  }
}

void setValue(Queue& q) {
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

void print(Queue queue) {
  cout << "\nXuất Queue: ";
  if (isEmpty(queue) != -1) {
    for (int i = queue.front; i <= queue.rear; i++) {
      cout << queue.elem[i] << " ";
    }
  } else {
    cout << "\nQueue Rỗng\n";
  }
}

void deQueue(Queue& queue) {
  if (isEmpty(queue) != -1) {
    queue.rear--;
  }
}

int getFront(Queue queue) { return queue.elem[0]; }
