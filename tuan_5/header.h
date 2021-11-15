#include <string.h>

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

const int MAXCHAR = 35;
struct SinhVien {
  char tenSinhVien[MAXCHAR];
  char maSinhVien[MAXCHAR];
  float diem;
};

typedef struct Node* Nodeptr;

struct Node {
  SinhVien data;
  Nodeptr link;
};

void khoiTao(Nodeptr& list);
void giaiPhong(Nodeptr& list);
Nodeptr taoNodeSinhVien(SinhVien a);
Nodeptr themDau(Nodeptr& list, SinhVien a);
bool kiemTraTrungMaSinhVien(Nodeptr& list, char* maSinhVien);
void nhapDanhSachSinhVien(Nodeptr& list);
void xuatDanhSachSinhVien(Nodeptr list);
void xoaDau(Nodeptr& list);
void xoaCuoi(Nodeptr& list);
Nodeptr timSinhVienBangMa(Nodeptr list, char maSinhVien[MAXCHAR]);
