#include "header.h"

void khoiTao(Nodeptr &list) { list = NULL; }

int isEmpty(Nodeptr list) { return (list == NULL ? true : false); }

Nodeptr taoNode(TYPEINFO x) {
  Nodeptr p;
  p = new Node;
  p->data = x;
  p->link = NULL;
  return p;
}

Nodeptr themDau(Nodeptr &list, TYPEINFO x) {
  Nodeptr p;

  p = taoNode(x);
  p->link = list;
  list = p;

  return p;
}

void nhapDanhSachThemDau(Nodeptr &list) {
  khoiTao(list);
  int x;

  do {
    cout << "\n Nhập x (thoát -99) = ";
    cin >> x;
    if (x == -99) {
      break;
    }
    themDau(list, x);
  } while (true);
}

void xuatDanhSach(Nodeptr list) {
  Nodeptr p = list;
  cout << endl;
  while (isEmpty(p) == false) {
    cout << p->data << " ";
    p = p->link;
  }
}

Nodeptr themCuoi(Nodeptr &list, TYPEINFO x) {
  Nodeptr p;
  p = taoNode(x);
  if (isEmpty(list) == true)
    list = p;
  else {
    Nodeptr q = list;
    while (q->link != NULL) q = q->link;
    q->link = p;
  }
  return p;
}

void nhapDanhSachThemCuoi(Nodeptr &list) {
  khoiTao(list);
  int x;

  do {
    cout << "\n Nhập x (thoát -99) = ";
    cin >> x;
    if (x == -99) {
      break;
    }
    themCuoi(list, x);
  } while (true);
}

Nodeptr timPhanTu(Nodeptr list, TYPEINFO x) {
  Nodeptr p = list;
  while (isEmpty(p) == false) {
    if (p->data == x) {
      return p;
    }
    p = p->link;
  }
  return p;
}

void xoaDau(Nodeptr &list) {
  Nodeptr p;
  if (isEmpty(list) == false) {
    p = list;
    list = p->link;
    delete p;
  }
}

void test(Nodeptr list) {
  Nodeptr p = list;

  while (isEmpty(p) == false) {
    if (p->data % 3 == 0) {
      cout << p->data;
    }

    p = p->link;
  }
}
