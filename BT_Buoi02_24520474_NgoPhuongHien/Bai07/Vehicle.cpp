#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

Vehicle ::Vehicle()
{
    cout << "Nhap ten chu xe: ";
    getline(cin, chuXe);
    cout << "Nhap loai xe: ";
    getline(cin, loaiXe);
    cout << "Nhap gia xe: ";
    cin >> giaXe;
    cout << "Nhap dung tich xylanh: ";
    cin >> dungtich;
}

Vehicle ::Vehicle(string cx, string lx, long long gx, short dt)
{
    if (gx < 0 || dt < 0)
    {
        cout << "Loi! Tri gia va dung tich phai >= 0.";
        giaXe = 0;
        dungtich = 0;
    }
    else
    {
        chuXe = cx;
        loaiXe = lx;
        giaXe = gx;
        dungtich = dt;
    }
}

long long Vehicle ::TienThue()
{
    double thue;
    if (dungtich < 100)
    {
        thue = giaXe * 0.01;
    }
    else if (dungtich >= 100 && dungtich <= 200)
    {
        thue = giaXe * 0.03;
    }
    else
    {
        thue = giaXe * 0.05;
    }

    return thue;
}

void Vehicle ::XuatKeKhai()
{
    cout << "Ten chu xe: " << chuXe << endl;
    cout << "Loai xe: " << loaiXe << endl;
    cout << "Tri gia xe: " << giaXe << endl;
    cout << "Dung tich xylanh: " << dungtich << endl;
    cout << "Thue xe: " << TienThue() << endl
         << endl;
}