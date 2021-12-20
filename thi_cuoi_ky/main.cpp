#include "header.h"

int main() {
  NODEPTR list;

  khoiTao(list);

  nhapDanhSachThemDau(list);
  xuatDanhSach(list);

  cout << "\n Cập nhật các giá trị chẵn sang 0" << endl;
  capNhatGiaTriChanSang0(list);
  xuatDanhSach(list);

  int x;
  cout << "\n Nhập số bạn muốn tính các giá trị nhỏ hơn X = ";
  cin >> x;
  cout << "\n Tổng các số nhỏ hơn " << x
       << " là: " << xuatTongPhanTuNhoHonX(list, x) << endl;
  ;

  int y;
  cout << "\n Nhập số bạn muốn tìm vị trí X = ";
  cin >> y;
  cout << "\n Vị trí của " << y << " là " << xuatViTriCuaX(list, y) << endl;

  NODEPTR listGiamDan;

  khoiTao(listGiamDan);

  cout << "\n nhập danh sách để kiểm tra sắp xếp giảm dần" << endl;
  nhapDanhSachThemDau(listGiamDan);

  xuatDanhSach(listGiamDan);

  if (kiemTraGiamDan(listGiamDan) == true) {
    cout << "\n DSLK được sắp xếp giảm dần" << endl;
  } else {
    cout << "\n DSLK không được sắp xếp giảm dần" << endl;
  }

  return 0;
}
