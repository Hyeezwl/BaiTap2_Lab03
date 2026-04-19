#include <iostream>
#include "cDaGiac.h"

using namespace std;

int main() {
    cDaGiac dagiac;
    dagiac.Nhap();

    cout << "\nToa do cac dinh cua da giac la: ";
    dagiac.Xuat();
    cout << "Chu vi cua da giac: " << dagiac.TinhChuVi() << endl;
    cout << "Dien tich cua da giac: " << dagiac.TinhDienTich() << endl;

    cout << endl;

    dagiac.TinhTien(2, 5);
    cout << "Sau khi tinh tien (cong them x=2, y=5): ";
    dagiac.Xuat();

    dagiac.ThuPhong(3);
    cout << "Sau khi thu phong (nhan 3 lan toa do): ";
    dagiac.Xuat();

    return 0;
}
