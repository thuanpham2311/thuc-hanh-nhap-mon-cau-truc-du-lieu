#include "header.h"

int main() {
  Nodeptr danhSachSinhVien;

  nhapDanhSachSinhVien(danhSachSinhVien);
  xuatDanhSachSinhVien(danhSachSinhVien);
  // xoaDau(danhSachSinhVien);
  xoaCuoi(danhSachSinhVien);
  xuatDanhSachSinhVien(danhSachSinhVien);

  timSinhVienBangMa(danhSachSinhVien, s);

  return 0;
}
