#include <cmath>
#include <iostream>
using namespace std;

typedef int TYPEINFO;
struct Node {
  TYPEINFO data;
  Node* link;
};

typedef Node* Nodeptr;

void khoiTao(Nodeptr& list);
int isEmpty(Nodeptr list);
Nodeptr taoNode(TYPEINFO x);
Nodeptr themDau(Nodeptr& list, TYPEINFO x);
void nhapDanhSachThemDau(Nodeptr& list);
void xuatDanhSach(Nodeptr list);
Nodeptr themCuoi(Nodeptr& list, TYPEINFO x);
void nhapDanhSachThemCuoi(Nodeptr& list);
Nodeptr timPhanTu(Nodeptr list, TYPEINFO x);
void xoaDau(Nodeptr &list);
