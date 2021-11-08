#include "header.h"

int main() {
  Nodeptr list;
  // khoiTao(list);
  // int x;
  // cout << "x = ";
  // cin >> x;
  // themDau(list, x);
  // xuatDanhSach(list);
  // nhapDanhSachThemDau(list);
  // xuatDanhSach(list);

  nhapDanhSachThemCuoi(list);
  xuatDanhSach(list);

  int x;
  cout << "\n Nhập phần tử cần tìm: ";
  cin >> x;
  if (timPhanTu(list, x) != NULL) {
    cout << "\nTìm thấy " << x << " ở địa chỉ: " << timPhanTu(list, x) << endl;
  } else {
    cout << "\nKhông tìm thấy phần tử\n";
  }

  return 0;
}
