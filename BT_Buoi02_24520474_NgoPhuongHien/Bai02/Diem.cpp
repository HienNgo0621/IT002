#include <iostream>
#include "Diem.h"
using namespace std;

Diem ::Diem(float h, float t)
{
    iHoanhDo = h;
    iTungDo = t;
}

float Diem ::getHoanh()
{
    return iHoanhDo;
}

float Diem ::getTung()
{
    return iTungDo;
}

void Diem ::setHoanh(float h)
{
    iHoanhDo = h;
}

void Diem ::setTung(float t)
{
    iTungDo = t;
}

void Diem ::TinhTien(float dx, float dy)
{
    iHoanhDo += dx;
    iTungDo += dy;
}

void Diem ::Nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> iHoanhDo;
    cout << "Nhap tung do: ";
    cin >> iTungDo;
}

void Diem ::Xuat() const
{
    cout << "(" << iHoanhDo << ", " << iTungDo << ")" << endl;
}
