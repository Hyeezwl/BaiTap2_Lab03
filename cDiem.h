#ifndef CDIEM_H
#define CDIEM_H


class cDiem
{
    public:
        cDiem();
        virtual ~cDiem();
        cDiem(double _x, double _y);

        void Nhap();
        void Xuat();
        double KhoangCach(cDiem DiemKhac);
        double getX();
        double getY();
        void setX(double _x);
        void setY(double _y);

        void TinhTien(double dx, double dy);
        void Quay(double goc);
    protected:

    private:
        double x,y;
};

#endif // CDIEM_H
