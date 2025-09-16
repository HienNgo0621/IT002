// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cSach.h"
#include <iostream>
using namespace std;

void cSach ::Nhap()
{
    cout << "Nhap ma sach: ";
    cin >> ms;
    cout << "Nhap ngay nhap sach: ";
    cin >> ngaynhap;
    cout << "Nhap don gia: ";
    cin >> gia;
    cout << "Nhap so luong: ";
    cin >> soluong;
    cout << "Nhap nha xuat ban: ";
    cin.ignore();
    getline(cin, nxb);
}

void cSach ::Xuat()
{
    cout << ms << "\t" << ngaynhap << "\t" << gia << "\t" << soluong << "\t" << nxb;
}

string cSach ::getNXB()
{
    return nxb;
}

unsigned long cSach ::getGia()
{
    return gia;
}