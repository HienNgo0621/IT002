// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <vector>
#include <cmath>
#include "cDaThuc.h"
using namespace std;

int main()
{
    cDaThuc x;
    cDaThuc y;
    cout << "Nhap da thuc dau tien." << endl;
    x.Nhap();
    cout << "\nNhap da thuc thu hai." << endl;
    y.Nhap();

    float a, b;
    cout << "\nNhap gia tri bien cua da thuc thu nhat: ";
    cin >> a;
    cout << "Gia tri cua da thuc thu nhat khi x = " << a << " la: " << x.giaTriDT(a) << endl;

    cout << "\nNhap gia tri bien cua da thuc thu hai: ";
    cin >> b;
    cout << "Gia tri cua da thuc thu hai khi x = " << b << " la: " << y.giaTriDT(b) << endl;

    cout << "\nCong hai da thuc: ";
    cDaThuc tong = x.Tong(y);
    tong.Xuat();

    cout << "\nHieu hai da thuc: ";
    cDaThuc hieu = x.Hieu(y);
    hieu.Xuat();

    system("pause");
    return 0;
}