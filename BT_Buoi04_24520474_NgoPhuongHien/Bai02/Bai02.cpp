// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <cmath>
#include "cPhanSo.h"
using namespace std;

int main()
{
    cPhanSo a, b;
    cout << "Nhap phan so thu nhat." << endl;
    cin >> a;

    cout << "\nNhap phan so thu hai." << endl;
    cin >> b;
    cPhanSo tong = a + b;
    cout << "\nTong hai phan so: " << tong;

    cPhanSo hieu = a - b;
    cout << "\nHieu hai phan so: " << hieu;

    cPhanSo tich = a * b;
    cout << "\nTich hai phan so: " << tich;

    cPhanSo thuong = a / b;
    cout << "\nThuong hai phan so: " << thuong;

    if (a == b)
    {
        cout << "\nHai phan so bang nhau." << endl;
    }
    else if (a > b)
    {
        cout << "\nPhan so thu nhat lon hon phan so thu hai." << endl;
    }
    else
        cout << "\nPhan so thu nhat be hon phan so thu hai." << endl;

    system("pause");
    return 0;
}