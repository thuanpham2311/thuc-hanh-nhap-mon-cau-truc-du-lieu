#include <iostream>
using namespace std;

const int MAX = 50;

struct DaySo {
  int ds[MAX];
  int n;
};

void khoiTao(DaySo &x);
int isEmpty(DaySo x);
int isFull(DaySo x);
int listSize(DaySo x);
void doc_DanhSach(DaySo &x);
void xuat_DanhSach(DaySo x);
void chen_ViTri(DaySo &x, int pos, int a);
void xoa_ViTri(DaySo &x, int pos);
int timKiem_TuanTu(DaySo x, int a);
int timKiemNhiPhan(DaySo x, int k);
void xoa_GiaTri_K(DaySo &x, int k);
void sapXep(DaySo &x);
int diemSoLanXuatHienX(DaySo array, int x);
void xuatLanLuotCacViTriX(DaySo array, int x);
