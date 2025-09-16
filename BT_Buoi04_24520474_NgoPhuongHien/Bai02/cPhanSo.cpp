// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <cmath>
#include "cPhanSo.h"
using namespace std;

cPhanSo ::cPhanSo(int t, int m)
{
    if (m == 0)
    {
        cout << "Mau so khong hop le! Dua ve mac dinh." << endl;
        m = 1;
    }
    iMau = m;
    iTu = t;
}

istream &operator>>(istream &in, cPhanSo &a)
{
    cout << "Nhap tu so: ";
    in >> a.iTu;
    do
    {
        cout << "Nhap mau so (khac 0): ";
        in >> a.iMau;
    } while (a.iMau == 0);
    return in;
}

int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

void cPhanSo ::RutGon()
{
    int gcd = UCLN(abs(iTu), abs(iMau));
    iTu /= gcd;
    iMau /= gcd;
    if (iMau < 0)
    {
        iTu = iTu * (-1);
        iMau = iMau * (-1);
    }
}

ostream &operator<<(ostream &out, cPhanSo &a)
{
    a.RutGon();
    if (a.iMau == 1 || a.iTu == 0)
    {
        cout << a.iTu << endl;
    }
    else
    {
        cout << a.iTu << "/" << a.iMau << endl;
    }
    return out;
}

int cPhanSo ::getTu()
{
    return iTu;
}

int cPhanSo ::getMau()
{
    return iMau;
}

void cPhanSo ::setTu(int t)
{
    iTu = t;
}

void cPhanSo ::setMau(int m)
{
    iMau = m;
}

cPhanSo cPhanSo ::operator+(const cPhanSo &a)
{
    return cPhanSo(iTu * a.iMau + a.iTu * iMau, iMau * a.iMau);
}

cPhanSo cPhanSo ::operator-(const cPhanSo &a)
{
    return cPhanSo(iTu * a.iMau - a.iTu * iMau, iMau * a.iMau);
}

cPhanSo cPhanSo ::operator*(const cPhanSo &a)
{
    return cPhanSo(iTu * a.iTu, iMau * a.iMau);
}

cPhanSo cPhanSo ::operator/(const cPhanSo &a)
{
    if (a.iTu == 0)
    {
        cout << "Loi chia cho 0, tra ve phan so dau tien" << endl;
        return *this;
    }
    return cPhanSo(iTu * a.iMau, iMau * a.iTu);
}

bool cPhanSo ::operator==(const cPhanSo &a)
{
    return (iTu * a.iMau == a.iTu * iMau);
}

bool cPhanSo ::operator>(const cPhanSo &a)
{
    return (iTu * a.iMau > a.iTu * iMau);
}

bool cPhanSo ::operator<(const cPhanSo &a)
{
    return (iTu * a.iMau < a.iTu * iMau);
}