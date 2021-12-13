#include "header.h"

int main() {
  Nodeptr list;

  khoiTao(list);

  nhapDanhSachThemCuoi(list);
  xuatDanhSach(list);

  cout << "\nXóa đầu";
  xoaDau(list);
  xuatDanhSach(list);

  cout << "\ncac so chi het cho 3: ";
  xuatCacSoChiaHetCho3(list);

  cout << "\ntổng phần tử = " << xuatTong(list) << endl;

  cout << "\n tổng phần tử lẽ = " << xuatTongPhanTuLe(list) << endl;

  // Nodeptr chan, le;

  // khoiTao(chan);
  // khoiTao(le);

  // tachDaySoChanLe(list, chan, le);

  // xuatDanhSach(chan);
  // xuatDanhSach(le);

  deleteAllX(list, 1);
  xuatDanhSach(list);

  giaiPhong(list);
  return 0;
}
