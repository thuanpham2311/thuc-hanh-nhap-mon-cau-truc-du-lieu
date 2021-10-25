#include "header.h"

int main() {
  DaySo x;
  int pos, a, k;
  khoiTao(x);
  doc_DanhSach(x);
  xuat_DanhSach(x);
  // cout << "\n Nhap phan tu can chen:";
  // cin >> k;
  // cout << "\n Nhap vi tri can chen:";
  // cin >> pos;
  // chen_ViTri(x, pos, k);
  // xuat_DanhSach(x);
  // cout << "\n Nhap vi tri can xoa: ";
  // cin >> pos;
  // xoa_ViTri(x, pos);
  // xuat_DanhSach(x);

  // cout << "\n Nhap phan tu k can tim:";
  // cin >> k;

  // if (timKiem_TuanTu(x, k) == -1)
    // cout << "\n Khong tim thay";
  // else
    // cout << "\n Tim thay o vi tri " << timKiem_TuanTu(x, k);

  // cout << "\n Nhap gia tri k can xoa:";
  // cin >> k;

  // xoa_GiaTri_K(x, k);
  // xuat_DanhSach(x);

  // sapXep(x);

  // cout << "\n Nhap phan tu k can tim:";
  // cin >> k;

  // if (timKiemNhiPhan(x, k) == -1)
    // cout << "\n Khong tim thay";
  // else
    // cout << "\n Tim thay o vi tri " << timKiemNhiPhan(x, k);

  cout << "\n Nhap phan tu x can diem:";
  cin >> k;
  cout << "\nSố lần xuất hiện của " << k << " trong mảng là " << diemSoLanXuatHienX(x, k) << endl;

  // cout << "\n Nhap phan tu x can xuat vi tri:";
  // cin >> k;
  // cout << "\nCác vị trí của " << k << " trong mảng là ";
  // xuatLanLuotCacViTriX(x, k);

  return 0;
}
