#include "header.h"

void khoiTao(NODEPTR &list) { list = NULL; }

int isEmpty(NODEPTR list) { return (list == NULL ? true : false); }

void giaiPhong(NODEPTR &list) {
  NODEPTR p = list;
  while (p != NULL) {
    list = list->link;
    delete p;
    p = list;
  }
}

NODEPTR taoNode(TYPEINFO x) {
  NODEPTR p;
  p = new NODE;
  p->k = x;
  p->link = NULL;
  return p;
}

NODEPTR themDau(NODEPTR &list, TYPEINFO x) {
  NODEPTR p;

  p = taoNode(x);
  p->link = list;
  list = p;

  return p;
}

void nhapDanhSachThemDau(NODEPTR &list) {
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

void xuatDanhSach(NODEPTR list) {
  NODEPTR p = list;
  cout << endl;
  while (isEmpty(p) == false) {
    cout << p->k << " ";
    p = p->link;
  }
}

void capNhatGiaTriChanSang0(NODEPTR &list) {
  NODEPTR p = list;
  while (isEmpty(p) == false) {
    if (p->k % 2 == 0) {
      p->k = 0;
    }
    p = p->link;
  }
}

TYPEINFO xuatTongPhanTuNhoHonX(NODEPTR list, TYPEINFO x) {
  NODEPTR p = list;
  TYPEINFO sum = 0;

  while (isEmpty(p) == false) {
    if (p->k < x) {
      sum += p->k;
    }
    p = p->link;
  }

  return sum;
}

int xuatViTriCuaX(NODEPTR list, TYPEINFO x) {
  NODEPTR p = list;
  int location = 0;
  bool flag = false;

  while (flag == false) {
    location++;
    if (p->k == x) {
      flag = true;
    }
    p = p->link;
  }

  return location;
}

bool kiemTraGiamDan(NODEPTR list) {
  NODEPTR p = list;

  TYPEINFO tmp = p->k;
  p = p->link;

  while (isEmpty(p) == false) {
    if (tmp < p->k) {
      return false;
    } else {
      tmp = p->k;
      p = p->link;
    }
  }
  return true;
}
