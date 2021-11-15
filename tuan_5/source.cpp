#include "header.h"

void khoiTao(Nodeptr& list) { list = NULL; }

void giaiPhong(Nodeptr& list) {
  Nodeptr p = list;

  while (list != NULL) {
    list = list->link;
    delete p;
    p = list;
  }
}

Nodeptr taoNodeSinhVien(SinhVien a) {
  Nodeptr p;
  p = new Node;
  p->data = a;
  p->link = NULL;
  return p;
}

Nodeptr themDau(Nodeptr& list, SinhVien a) {
  Nodeptr p = taoNodeSinhVien(a);
  p->link = list;
  list = p;
  return p;
}

Nodeptr themCuoi(Nodeptr& list, SinhVien a) {
  Nodeptr p;
  p = taoNodeSinhVien(a);

  if (list == NULL) {
    list = p;
  } else {
    Nodeptr q = list;
    while (q->link != NULL) {
      q = q->link;
    }
    q->link = p;
  }
  return p;
}

bool kiemTraTrungMaSinhVien(Nodeptr& list, char* maSinhVien) {
  Nodeptr p = list;

  while (p != NULL) {
    if (strcmp(p->data.maSinhVien, maSinhVien) == 0) {
      return true;
    }
    p = p->link;
  }
  return false;
}

void nhapDanhSachSinhVien(Nodeptr& list) {
  SinhVien sv;
  khoiTao(list);
  do {
    cout << "\nNhập mã số sinh viên (nhập giá trị 0 để thoát): ";
    cin.getline(sv.maSinhVien, MAXCHAR);

    while (kiemTraTrungMaSinhVien(list, sv.maSinhVien)) {
      cout << "\nMã số sinh viên bị trùng";
      cout << "\nNhập lại mã số sinh viên: ";
      cin.getline(sv.maSinhVien, MAXCHAR);
    }

    if (strcmp(sv.maSinhVien, "0") == 0) {
      break;
    }

    cout << "\nNhập tên sinh viên: ";
    cin.getline(sv.tenSinhVien, MAXCHAR);

    cout << "\nNhập điểm sinh viên: ";
    cin >> sv.diem;

    cin.ignore();
    // themDau(list, sv);
    themCuoi(list, sv);
  } while (true);
}

void xuatDanhSachSinhVien(Nodeptr list) {
  cout << setw(0) << "Mã sinh viên" << setw(MAXCHAR) << "Tên sinh viên"
       << setw(MAXCHAR) << "Điểm" << endl;

  while (list != NULL) {
    cout << setw(0) << list->data.maSinhVien << setw(MAXCHAR)
         << list->data.tenSinhVien << setw(MAXCHAR) << list->data.diem << endl;
    list = list->link;
  }
}

void xoaDau(Nodeptr& list) {
  Nodeptr p;
  if (list != NULL) {
    p = list;
    list = p->link;
    delete p;
  }
}

void xoaCuoi(Nodeptr& list) {
  Nodeptr p, q;
  p = list;
  q = list;
  if (p->link == NULL) {
    delete p;
    list = NULL;
  } else {
    while (p->link != NULL) {
      q = p;
      p = p->link;
    }
    if (p->link == NULL) {
      delete p;
      q->link = NULL;
    }
  }
}

Nodeptr timSinhVienBangMa(Nodeptr list, SinhVien x) {
  Nodeptr p = list;

  while (p != NULL) {
    if (strcmp(p->data.maSinhVien, x.maSinhVien) == 0) {
      return p;
    }
    p = p->link;
  }

  return NULL;
}
