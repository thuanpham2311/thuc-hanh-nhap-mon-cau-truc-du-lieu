#include "header.h"

int main() {
  NODEPTR list;

  khoiTao(list);

  nhapDanhSachThemDau(list);
  xuatDanhSach(list);

  cout << "\n Cập nhật các giá trị chẵn sang 0" << endl;
  capNhatGiaTriChanSang0(list);
  xuatDanhSach(list);

  return 0;
}
