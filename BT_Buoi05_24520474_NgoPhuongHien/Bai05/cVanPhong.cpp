// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cVanPhong.h"
#include "cNhanVien.h"
#include <iostream>
using namespace std;

void cVanPhong ::Nhap()
{
    cNhanVien ::Nhap();
    cout << "Nhap ngay lam viec cua nhan vien: ";
    cin >> ngaylamviec;
}

void cVanPhong ::Xuat()
{
    cNhanVien ::Xuat();
    cout << tinhLuong() << endl;
}

unsigned long cVanPhong ::tinhLuong()
{
    return ngaylamviec * 100000;
}