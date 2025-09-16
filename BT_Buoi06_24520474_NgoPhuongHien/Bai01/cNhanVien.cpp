// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cNhanVien.h"
#include <iostream>
using namespace std;

void cNhanVien ::Nhap()
{
    cout << "Nhap ho va ten nhan vien: ";
    cin.ignore();
    getline(cin, ten);
    cout << "Nhap ngay sinh cua nhan vien (ngay thang nam): ";
    cin >> ngay >> thang >> nam;
}

void cNhanVien ::Xuat()
{
    cout << ten << "\t" << ngay << "/" << thang << "/" << nam << "\t";
}