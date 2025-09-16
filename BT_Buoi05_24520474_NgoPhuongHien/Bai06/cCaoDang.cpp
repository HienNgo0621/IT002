// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cCaoDang.h"
#include "cSinhVien.h"
#include <iostream>
using namespace std;

void cCaoDang ::Nhap()
{
    cSinhVien ::Nhap();
    cout << "Nhap diem thi tot nghiep cua sinh vien: ";
    cin >> diemtn;
}

void cCaoDang ::Xuat()
{
    cSinhVien ::Xuat();
    cout << "DTN: " << diemtn << endl;
}

bool cCaoDang ::XetTN()
{
    return (tinchi >= 110 && diemTB >= 5 && diemtn >= 5);
}