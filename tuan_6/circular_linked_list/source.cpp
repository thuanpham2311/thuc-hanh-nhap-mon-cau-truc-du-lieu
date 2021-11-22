#include "header.h"

void khoiTao(List &list) {
  list.first = list.last = NULL;
}

int isEmpty(List list) {
  if (list.first == NULL) {
    return 0;
  }
  return 1;
}

Nodeptr taoNode(TYPEINFO x) {
  Nodeptr p = new NODE;
  if (p == NULL) {
    return 0;
  }
  p->link = NULL;
  p->data = x;
  return p;
}

void themDau(List& list, TYPEINFO x) {
  Nodeptr p;
  p = taoNode(x);
  if (isEmpty(list)) {
    list.first = p;
    list.last = p;
  } else {
    p->link = list.first;
    list.first = p;
  }
  list.last->link = list.first;
}

void nhapDanhSachThemDau(List &list) {
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

void xuatDanhSach(List list) {
  Nodeptr p = list.first;
  while (p != NULL && p != list.first) {
    cout << p->data << " ";
    p = p->link;
  }
}
