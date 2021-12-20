#include <cmath>
#include <iostream>
using namespace std;

typedef int TYPEINFO;
struct NODE {
  TYPEINFO k;
  NODE* link;
};

typedef NODE* NODEPTR;

void khoiTao(NODEPTR& list);
int isEmpty(NODEPTR list);
NODEPTR taoNode(TYPEINFO x);
NODEPTR themDau(NODEPTR& list, TYPEINFO x);
void nhapDanhSachThemDau(NODEPTR& list);
void xuatDanhSach(NODEPTR list);
void capNhatGiaTriChanSang0(NODEPTR& list);
TYPEINFO xuatTongPhanTuNhoHonX(NODEPTR list, TYPEINFO x);
int xuatViTriCuaX(NODEPTR list, TYPEINFO x);
bool kiemTraGiamDan(NODEPTR list);
