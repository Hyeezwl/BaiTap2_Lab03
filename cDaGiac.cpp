#include "cDaGiac.h"
#include <cmath>
#include <iostream>

using namespace std;

cDaGiac::cDaGiac()
{
    n = 0;
}

cDaGiac::~cDaGiac()
{

}
void cDaGiac::Nhap() {
    do {
        cout << "Nhap so luong dinh cua da giac (tu 3 den 100): ";
        cin >> n;
        if (n < 3 || n > 100) {
            cout << "Loi: So dinh khong hop le. Vui long nhap lai!" << endl;
        }
    } while (n < 3 || n > 100);

    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do dinh thu " << i + 1 << ": ";
        dsDiem[i].Nhap();
    }
}

void cDaGiac::Xuat() {
    for (int i = 0; i < n; i++) {
        dsDiem[i].Xuat();
        if (i < n - 1) {
            cout << " - ";
        }
    }
    cout << endl;
}

double cDaGiac::TinhChuVi() {
    double tongChuVi = 0;

    // Tinh khoang cach giua cac diem lien tiep
    for (int i = 0; i < n - 1; i++) {
        tongChuVi = tongChuVi + dsDiem[i].KhoangCach(dsDiem[i+1]);
    }

    // Cong them khoang cach tu diem cuoi cung noi ve lai diem dau tien
    tongChuVi = tongChuVi + dsDiem[n-1].KhoangCach(dsDiem[0]);

    return tongChuVi;
}

double cDaGiac::TinhDienTich() {
    // Tinh dien tich bang cong thuc toa do (cong thuc Shoelace)
    // Tach ra lam 2 tong rieng biet cho de hieu
    double tong1 = 0;
    double tong2 = 0;

    for (int i = 0; i < n - 1; i++) {
        tong1 = tong1 + (dsDiem[i].getX() * dsDiem[i+1].getY());
        tong2 = tong2 + (dsDiem[i+1].getX() * dsDiem[i].getY());
    }

    // Nhan cheo diem cuoi voi diem dau tien
    tong1 = tong1 + (dsDiem[n-1].getX() * dsDiem[0].getY());
    tong2 = tong2 + (dsDiem[0].getX() * dsDiem[n-1].getY());

    // Theo cong thuc la lay (tong1 - tong2) chia doi
    double ketQua = (tong1 - tong2) / 2.0;

    // Neu ket qua ra so am thi doi thanh so duong (tri tuyet doi)
    if (ketQua < 0) {
        ketQua = ketQua * -1;
    }

    return ketQua;
}

void cDaGiac::TinhTien(double dx, double dy) {
    for (int i = 0; i < n; i++) {
        dsDiem[i].TinhTien(dx, dy);
    }
}

void cDaGiac::Quay(double goc) {
    for (int i = 0; i < n; i++) {
        dsDiem[i].Quay(goc);
    }
}

void cDaGiac::ThuPhong(double k) {
    for (int i = 0; i < n; i++) {
        // Lay toa do hien tai x k roi ghi de lai
        double toaDoXMoi = dsDiem[i].getX() * k;
        double toaDoYMoi = dsDiem[i].getY() * k;

        dsDiem[i].setX(toaDoXMoi);
        dsDiem[i].setY(toaDoYMoi);
    }
}
