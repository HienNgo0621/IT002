// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cSachTK.h"
#include <iostream>
using namespace std;

void cSachTK ::Nhap()
{
    cSach ::Nhap();
    cout << "Nhap thue: ";
    cin >> thue;
}

void cSachTK ::Xuat()
{
    cSach ::Xuat();
    cout << "\t" << thue << endl;
}

unsigned long cSachTK ::thanhTien()
{
    return (soluong * gia) + thue;
}