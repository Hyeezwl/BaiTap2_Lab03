#ifndef CDAGIAC_H
#define CDAGIAC_H
#include "cDiem.h"

class cDaGiac
{
    public:
        cDaGiac();
        virtual ~cDaGiac();
        void Nhap();
        void Xuat();
        double TinhChuVi();
        double TinhDienTich();

        void TinhTien(double dx, double dy);
        void Quay(double goc);
        void ThuPhong(double k);
    protected:

    private:
        int n; // so dinh
        cDiem dsDiem[100]; // mang chua cac dinh
};

#endif // CDAGIAC_H
