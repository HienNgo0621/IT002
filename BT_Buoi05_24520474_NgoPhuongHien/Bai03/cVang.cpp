// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cVang.h"
#include <iostream>
using namespace std;

void cVang ::Nhap()
{
    cGiaoDich ::Nhap();
    cout << "Nhap loai vang: ";
    cin.ignore();
    getline(cin, loaiv);
}

void cVang ::Xuat()
{
    cGiaoDich ::Xuat();
    cout << loaiv << endl;
}

unsigned long cVang ::thanhTien()
{
    return soluong * gia;
}
