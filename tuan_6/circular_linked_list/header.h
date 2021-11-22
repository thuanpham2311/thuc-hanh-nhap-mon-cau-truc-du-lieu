#include <cmath>
#include <iostream>
using namespace std;

typedef int TYPEINFO;

struct NODE {
  TYPEINFO data;
  NODE* link;
};

typedef NODE* Nodeptr;

struct List {
  Nodeptr first;
  Nodeptr last;
};

void khoiTao(List &list);
Nodeptr themNode(TYPEINFO x);
void themDau(List& list, TYPEINFO x);
void nhapDanhSachThemDau(List &list);
void xuatDanhSach(List list);
