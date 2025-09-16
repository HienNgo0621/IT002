// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cSinhVien.h"
#include <iostream>
using namespace std;

void cSinhVien ::Nhap()
{
    cout << "Nhap ma so sinh vien: ";
    cin.ignore();
    getline(cin, ms);
    cout << "Nhap ho ten cua sinh vien: ";
    getline(cin, ten);
    cout << "Nhap dia chi cua sinh vien: ";
    getline(cin, diachi);
    cout << "Nhap tong so tin chi cua sinh vien: ";
    cin >> tinchi;
    cout << "Nhap diem trung binh cua sinh vien: ";
    cin >> diemTB;
}

void cSinhVien ::Xuat()
{
    cout << loai() << " " << ms << " " << ten << " " << diachi << " TC: " << tinchi << " DTB: " << diemTB << " ";
}
