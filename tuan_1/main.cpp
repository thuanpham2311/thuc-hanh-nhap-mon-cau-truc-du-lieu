#include "header.h"

int main() {
  int a[KTM], n, x;

  soPhanTuCuaMang(n);
  nhapMang(a, n);
  xuatMang(a, n);

  cout << "\n Nhap phan tu can tim:";
  cin >> x;

  if (timKiem_TuanTu(a, n, x) >= 0)
    cout << "\n tim thay " << x << "\t ở vị trí" << timKiem_TuanTu(a, n, x);
  else
    cout << "\n Khong tim thay " << x;

  sapXep(a, n);

  xuatMang(a, n);

  cout << "\nTổng phần tử âm có trong mảng là: " << tongPhanTuAmTrongMang(a, n)
       << endl;

  cout << "\nCó " << diemCacSoNguyenToTrongMang(a, n)
       << " số nguyên trong mảng";

  xuatSoHoangThienTrongMang(a, n);

  return 0;
}
