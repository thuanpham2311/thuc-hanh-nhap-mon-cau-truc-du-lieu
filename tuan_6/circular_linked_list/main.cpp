#include "header.h"

int main() {
  List list;
  khoiTao(list);
  nhapDanhSachThemDau(list);
  cout << "\nDanh sach sau khi nhap: ";
  xuatDanhSach(list);
  return 0;
}
