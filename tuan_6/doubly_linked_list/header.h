#include <cmath>
#include <iostream>
using namespace std;

typedef int TYPEINFO;
struct NODE {
  TYPEINFO data;
  NODE *next;
  NODE *pre;
};

typedef NODE* Nodeptr;

struct Dlist {
  Nodeptr first;
  Nodeptr last;
};

void khoiTao(Dlist& list);
Nodeptr taoNode(TYPEINFO x);
int isEmpty(Dlist list);
void themDau(Dlist& list, TYPEINFO x);
void nhapDanhSachThemDau(Dlist &list);
void xuatDanhSach(Dlist list);
void xoaDau(Dlist &list);
int timViTriX(Dlist list, TYPEINFO x);
int tongPhanTuLe(Dlist list);
