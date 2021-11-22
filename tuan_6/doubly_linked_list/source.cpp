#include "header.h"

void khoiTao(Dlist& list) {
  list.first = NULL;
  list.last = NULL;
}

Nodeptr taoNode(TYPEINFO x) {
  Nodeptr p;
  p = new NODE;
  p->data = x;
  p->next = NULL;
  p->pre = NULL;
  return p;
}

int isEmpty(Dlist list) {return (list.first == NULL ? 1:0);}

void themDau(Dlist& list, TYPEINFO x) {
  Nodeptr p;
  p = taoNode(x);
  if (isEmpty(list)) {
    list.first = p;
    list.last = p;
  } else {
    p->next = list.first;
    list.first->pre = p;
    list.first = p;
  }
}

void nhapDanhSachThemDau(Dlist &list) {
  khoiTao(list);
  int x;

  do {
    cout << "\n Nhập x (thoát 999) = ";
    cin >> x;
    if (x == 999) {
      break;
    }
    themDau(list, x);
  } while (true);
}

void xuatDanhSach(Dlist list) {
  Nodeptr p = list.first;
  while (p != NULL) {
    cout << p->data << " ";
    p = p->next;
  }
}

void xoaDau(Dlist &list) {
  Nodeptr p;
  if (isEmpty(list) == false) {
    p = list.first;
    list.first = p->next;
    delete p;
  }
}

int timViTriX(Dlist list, TYPEINFO x) {
  Nodeptr p = list.first;

  int count = 0;
  while (p != NULL) {
    if (p->data == x) {
      break;
    }
    count++;
    p = p->next;
  }

  return 0;
}

int tongPhanTuLe(Dlist list) {
  int sum = 0;

  Nodeptr p;

  while (p != NULL) {
    if (p->data % 2 == 1) {
      sum += p->data;
    }
    p = p->next;
  }

  return 0;
}
