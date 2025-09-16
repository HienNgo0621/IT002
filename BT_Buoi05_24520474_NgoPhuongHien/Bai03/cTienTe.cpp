// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cTienTe.h"
#include <iostream>
using namespace std;

void cTienTe ::Nhap()
{
    cGiaoDich ::Nhap();
    do
    {
        cout << "Nhap loai tien (VND, EURO, USD): ";
        cin >> loait;
    } while (loait != "VND" && loait != "EURO" && loait != "USD");
    cout << "Nhap ti gia: ";
    cin >> tigia;
}

void cTienTe ::Xuat()
{
    cGiaoDich ::Xuat();
    cout << loait << " " << tigia << endl;
}

unsigned long cTienTe ::thanhTien()
{
    if (loait == "EURO" || loait == "USD")
        return soluong * gia * tigia;
    return soluong * gia;
}

std ::string cTienTe ::getLoai()
{
    return loait;
}