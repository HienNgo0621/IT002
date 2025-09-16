// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cDat.h"
#include "cGiaoDich.h"
#include <iostream>
using namespace std;

void cDat ::Nhap()
{
    cGiaoDich ::Nhap();
    do
    {
        cout << "Nhap loai dat (A, B, C): ";
        cin >> loaidat;
    } while (loaidat != 'A' && loaidat != 'B' && loaidat != 'C');
}

void cDat ::Xuat()
{
    cGiaoDich ::Xuat();
    cout << "loai " << loaidat << endl;
}

double cDat ::thanhTien()
{
    if (loaidat == 'B' || loaidat == 'C')
        return dientich * gia;
    return dientich * gia * 1.5;
}

char cDat ::getLoaiDat()
{
    return loaidat;
}