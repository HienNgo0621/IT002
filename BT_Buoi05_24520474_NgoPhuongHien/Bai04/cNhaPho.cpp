// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cNhaPho.h"
#include "cGiaoDich.h"
#include <iostream>
using namespace std;

void cNhaPho ::Nhap()
{
    cGiaoDich ::Nhap();
    cin.ignore();
    do
    {
        cout << "Nhap loai nha (cao cap, thuong): ";
        getline(cin, loainha);
    } while (loainha != "cao cap" && loainha != "thuong");
    cout << "Nhap dia chi: ";
    getline(cin, diachi);
}

void cNhaPho ::Xuat()
{
    cGiaoDich ::Xuat();
    cout << "loai " << loainha << " " << diachi << endl;
}

double cNhaPho ::thanhTien()
{
    if (loainha == "cao cap")
        return dientich * gia;
    return dientich * gia * 0.9;
}

string cNhaPho ::getLoaiNha()
{
    return loainha;
}