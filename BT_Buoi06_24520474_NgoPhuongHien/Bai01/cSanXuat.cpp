// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cSanXuat.h"
#include "cNhanVien.h"
#include <iostream>
using namespace std;

void cSanXuat ::Nhap()
{
    cNhanVien ::Nhap();
    cout << "Nhap luong can ban cua nhan vien: ";
    cin >> luongcanban;
    cout << "Nhap so san pham: ";
    cin >> sosp;
}

void cSanXuat ::Xuat()
{
    cNhanVien ::Xuat();
    cout << tinhLuong() << endl;
}

unsigned long cSanXuat ::tinhLuong()
{
    return luongcanban + sosp * 5000;
}