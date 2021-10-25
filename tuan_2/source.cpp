#include "header.h"

void khoiTao(DaySo &x) { x.n = 0; }

int isEmpty(DaySo x) { return (x.n == 0 ? 1 : 0); }

int isFull(DaySo x) { return (x.n == MAX ? 1 : 0); }

void doc_DanhSach(DaySo &x) {
  cout << "\n Nhap vao so phan tu cua DS:";
  cin >> x.n;
  for (int i = 0; i < x.n; i++) {
    cout << "\n Nhap vao phan tu thu " << i + 1 << ":";
    cin >> x.ds[i];
  }
}
void xuat_DanhSach(DaySo x) {
  cout << "\n Phan tu trong DS:";
  for (int i = 0; i < x.n; i++) cout << x.ds[i] << " ";
}

void chen_ViTri(DaySo &x, int pos, int a) {
  if (pos < 0 || pos > x.n)
    cout << "\n Vi tri " << pos << " khong hop le";
  else if (isEmpty(x) == 1) {
    if (pos == 0) {
      x.ds[0] = a;
      x.n++;
    } else
      cout << "\n Vi tri khong hop le";
  } else if (isFull(x) == 1)
    cout << "\n Danh sach day";
  else {
    for (int i = x.n - 1; i >= pos; i--) x.ds[i + 1] = x.ds[i];
    x.ds[pos] = a;
    x.n++;
  }
}

void xoa_ViTri(DaySo &x, int pos) {
  int i;
  if (pos < 0 || pos > x.n - 1)
    cout << "Vi tri" << pos << "khong hop le !";
  else if (isEmpty(x))
    cout << "DS bi rong";
  else {
    for (i = pos + 1; i <= x.n; i++) x.ds[i - 1] = x.ds[i];
    x.n--;
  }
}

int timKiem_TuanTu(DaySo x, int a) {
  int i = 0;
  while (i < x.n && x.ds[i] != a) i++;
  if (i == x.n) return -1;
  return i;
}

int timKiemNhiPhan(DaySo x, int k) {
  int top = x.n - 1, bot = 0, mid;
  do {
    mid = (top + bot) / 2;
    if (x.ds[mid] == k) {
      return mid;
    } else if (k < x.ds[mid]) {
      top = mid - 1;
    } else {
      bot = mid + 1;
    }
  } while (bot <= top);
  return -1;
}

void sapXep(DaySo &x) {
  for (int i = 0; i < x.n - 1; i++)
    for (int j = i + 1; j < x.n; j++)
      if (x.ds[j] < x.ds[i]) {
        int tam = x.ds[i];
        x.ds[i] = x.ds[j];
        x.ds[j] = tam;
      }
}

void xoa_GiaTri_K(DaySo &x, int k) {
  for (int i = 0; i < x.n; i++) {
    if (x.ds[i] == k) {
      for (int j = i; j < x.n - 1; j++) x.ds[j] = x.ds[j + 1];
      x.n--;
    }
  }
}

int diemSoLanXuatHienX(DaySo array, int x) {
  int count = 0;

  for (int i = 0; i < array.n; i++) {
    if (array.ds[i] == x) {
      count++;
    }
  }

  return count;
}

void xuatLanLuotCacViTriX(DaySo array, int x) {
  for (int i = 0; i < array.n; i++) {
    if (array.ds[i] == x) {
      cout << i << "\t";
    }
  }
}
