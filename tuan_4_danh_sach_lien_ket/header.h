#include <cmath>
#include <iostream>
using namespace std;

typedef int TYPEINFO;
struct Node {
  TYPEINFO data;
  Node* link;
};

typedef Node* Nodeptr;
typedef Nodeptr list;

void khoiTao(Nodeptr& list);
int isEmpty(Nodeptr list);
void giaiPhong(Nodeptr& list);
Nodeptr taoNode(TYPEINFO x);
Nodeptr themDau(Nodeptr& list, TYPEINFO x);
Nodeptr themCuoi(Nodeptr& list, TYPEINFO x);
void nhapDanhSachThemDau(Nodeptr& list);
void xuatDanhSach(Nodeptr list);
void nhapDanhSachThemCuoi(Nodeptr& list);
Nodeptr timPhanTu(Nodeptr list, TYPEINFO x);
void xoaDau(Nodeptr& list);
void xuatCacSoChiaHetCho3(Nodeptr list);
int xuatTong(Nodeptr list);
int xuatTongPhanTuLe(Nodeptr list);
