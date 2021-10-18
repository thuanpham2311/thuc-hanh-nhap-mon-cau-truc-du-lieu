#include "header.h"

void soPhanTuCuaMang(int &m) {
  do {
    cout << "\nNhap so phan tu mang:";
    cin >> m;
  } while (m <= 0 || m > KTM);
}

void nhapMang(int b[], int &m) {
  cout << "\nNhap gia tri cho mang:";
  for (int i = 0; i < m; i++) {
    cout << "\nNhap phan tu thu :" << i << ": ";
    cin >> b[i];
  }
}

void xuatMang(int b[], int n) {
  cout << "\nMang la:";
  for (int i = 0; i < n; i++) cout << b[i] << setw(3);
}

int timKiem_TuanTu(int a[], int n, int x) {
  int i = 0;
  while (i < n && a[i] != x) i++;
  if (i == n) return -1;
  return i;
}

void sapXep(int a[], int n) {
  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
      if (a[j] < a[i]) {
        int tam = a[i];
        a[i] = a[j];
        a[j] = tam;
      }
}

bool timKiemNhiPhan(int a[], int n, int x) {
  int flag = false;
  return flag;
}

int tongPhanTuAmTrongMang(int a[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] < 0) {
      sum += a[i];
    }
  }
  return sum;
}

bool kiemTraSoNguyenTo(int number) {
  bool flag = false;
  int count = 0;

  if (number < 2 || number > 100) {
    flag = false;
  } else {
    for (int i = 2; i <= number / 2; i++) {
      if (number % i == 0) {
        count++;
      }
    }
    if (count == 0) {
      flag = true;
    }
  }
  return flag;
}

int diemCacSoNguyenToTrongMang(int a[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (kiemTraSoNguyenTo(a[i]) == true) {
      count++;
    }
  }
  return count;
}

bool kiemTraSoHoangThien(int number) {
  int sum = 0;
  int flag = false;

  for (int i = 1; i < number; i++) {
    if (number % i == 0) {
      sum += i;
    }
  }

  if (sum == number) {
    flag = true;
  } else {
    flag = false;
  }

  return flag;
}

void xuatSoHoangThienTrongMang(int a[], int n) {
  cout << "\nSố hoàng thiện có trong mảng là: ";
  for (int i = 0; i < n; i++) {
    if (kiemTraSoHoangThien(a[i]) == true) {
      cout << "\t" << a[i];
    }
  }
}

int timKiemNhiPhan(int a[], int n, int k) {
  int top = n - 1, bot = 0, mid;
  do {
    mid = (top + bot) / 2;
    if (a[mid] == k) {
      return mid;
    } else if (k < a[mid]) {
      top = mid - 1;
    } else {
      bot = mid + 1;
    }
  } while (bot <= top);
  return -1;
}
