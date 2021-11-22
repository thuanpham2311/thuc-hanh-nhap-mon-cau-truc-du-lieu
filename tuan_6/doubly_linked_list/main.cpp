#include "header.h"

int main() {
  Dlist list;
  khoiTao(list);
  nhapDanhSachThemDau(list);
  cout << "\nDanh sach sau khi nhap: ";
  xuatDanhSach(list);
  xoaDau(list);
  cout << "\nDanh sach sau khi xoa dau: ";
  xuatDanhSach(list);
  cout << "\nNhap gia tri X can tim: ";
  int x;
  cin >> x;
  if (timViTriX(list, x) == NULL) {
    cout << "\nkhông có phần tử cần tìm" << endl;
  } else {
    cout << "\nTìm thấy " << x << " tại vị trí " << timViTriX(list, x) << endl;
  }
  return 0;
}
