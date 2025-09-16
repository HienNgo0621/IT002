// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cChungCu.h"
#include "cGiaoDich.h"
#include <iostream>
using namespace std;

void cChungCu ::Nhap()
{
    cGiaoDich ::Nhap();
    cout << "Nhap ma can: ", cin >> macan;
    cout << "Nhap vi tri tang: ";
    cin >> vitritang;
}

void cChungCu ::Xuat()
{
    cGiaoDich ::Xuat();
    cout << macan << " tang " << vitritang << endl;
}

double cChungCu ::thanhTien()
{
    if (vitritang == 1)
        return dientich * gia * 2;
    else if (vitritang >= 15)
        return dientich * gia * 1.2;
    else
        return dientich * gia;
}

unsigned char cChungCu ::getViTriTang()
{
    return vitritang;
}