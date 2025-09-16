// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "cGiaoDich.h"
using namespace std;

void cGiaoDich ::Nhap()
{
    cout << "Nhap ma giao dich: ";
    cin >> ma;
    cout << "Nhap ngay giao dich: ";
    cin >> ngay;
    cout << "Nhap don gia: ";
    cin >> gia;
    cout << "Nhap so luong: ";
    cin >> soluong;
}

void cGiaoDich ::Xuat()
{
    cout << ma << " " << ngay << " " << gia << " " << soluong << " ";
}
