// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cSachGK.h"
#include <iostream>
using namespace std;

void cSachGK ::Nhap()
{
    cSach ::Nhap();
    cout << "Nhap tinh trang (moi: 1, cu: 0): ";
    cin >> tinhtrang;
}

void cSachGK ::Xuat()
{
    cSach ::Xuat();
    cout << "\t" << tinhtrang << endl;
}

unsigned long cSachGK ::thanhTien()
{
    if (tinhtrang == 1)
        return soluong * gia;
    return soluong * gia * 0.5;
}