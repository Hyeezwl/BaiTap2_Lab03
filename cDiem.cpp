#include "cDiem.h"
#include <cmath>
#include <iostream>

using namespace std;

cDiem::cDiem()
{
    x = 0;
    y = 0;
}
cDiem::cDiem(double _x, double _y) {
    x = _x;
    y = _y;
}
cDiem::~cDiem()
{
    //dtor
}
void cDiem::Nhap() {
    cin >> x >> y;
}

void cDiem::Xuat() {
    cout << "(" << x << ", " << y << ")";
}

double cDiem::KhoangCach(cDiem DiemKhac) {
    double hieuX = x - DiemKhac.x;
    double hieuY = y - DiemKhac.y;
    return sqrt(hieuX * hieuX + hieuY * hieuY);
}

double cDiem::getX() {
    return x;
}

double cDiem::getY() {
    return y;
}

void cDiem::setX(double _x) {
    x = _x;
}

void cDiem::setY(double _y) {
    y = _y;
}

void cDiem::TinhTien(double dx, double dy) {
    x = x + dx;
    y = y + dy;
}

void cDiem::Quay(double goc) {
    double toaDoXMoi = x * cos(goc) - y * sin(goc);
    double toaDoYMoi = x * sin(goc) + y * cos(goc);
    x = toaDoXMoi;
    y = toaDoYMoi;
}
