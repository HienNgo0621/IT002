// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cDaiHoc.h"
#include "cSinhVien.h"
#include <iostream>
using namespace std;

void cDaiHoc ::Nhap()
{
    cSinhVien ::Nhap();
    cout << "Nhap ten luan van cua sinh vien: ";
    cin.ignore();
    getline(cin, tenlv);
    cout << "Nhap diem luan van cua sinh vien: ";
    cin >> diemlv;
}

void cDaiHoc ::Xuat()
{
    cSinhVien ::Xuat();
    cout << "Ten LV: " << tenlv << " DLV: " << diemlv << endl;
}

bool cDaiHoc ::XetTN()
{
    return (tinchi >= 170 && diemTB >= 5 && diemlv >= 5);
}