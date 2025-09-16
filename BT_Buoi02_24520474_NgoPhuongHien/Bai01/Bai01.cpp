// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <cmath>
#include "PhanSo.h"
using namespace std;

int main()
{
    PhanSo x, y;
    cout << "Nhap phan so thu nhat" << endl;
    x.Nhap();
    cout << "Nhap phan so thu hai" << endl;
    y.Nhap();
    PhanSo tong = x.Cong(y);
    cout << "Tong: ";
    tong.Xuat();
    PhanSo hieu = x.Tru(y);
    cout << "Hieu: ";
    hieu.Xuat();
    PhanSo tich = x.Nhan(y);
    cout << "Tich: ";
    tich.Xuat();
    PhanSo thuong = x.Chia(y);
    cout << "Thuong: ";
    thuong.Xuat();

    system("pause");
    return 0;
}