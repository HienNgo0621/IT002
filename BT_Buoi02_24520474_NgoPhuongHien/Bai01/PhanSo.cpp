#include <iostream>
#include <cmath>
#include "PhanSo.h"
using namespace std;

PhanSo ::PhanSo(int t, int m)
{
    if (m == 0)
    {
        cout << "Loi mau = 0! Tu dong dac ve mac dinh!" << endl;
        m = 1;
    }
    iTuSo = t;
    iMauSo = m;
}

int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

void PhanSo ::RutGon()
{
    int gcd = UCLN(abs(iTuSo), abs(iMauSo));
    iTuSo /= gcd;
    iMauSo /= gcd;
    if (iMauSo < 0)
    {
        iTuSo = iTuSo * (-1);
        iMauSo = iMauSo * (-1);
    }
}

void PhanSo ::Nhap()
{
    cout << "Nhap tu so: ";
    cin >> iTuSo;
    do
    {
        cout << "Nhap mau so (khac 0): ";
        cin >> iMauSo;
    } while (iMauSo == 0);
}

void PhanSo ::Xuat()
{
    RutGon();
    if (iMauSo == 1 || iTuSo == 0)
    {
        cout << iTuSo << endl;
    }
    else
    {
        cout << iTuSo << "/" << iMauSo << endl;
    }
}

PhanSo PhanSo ::Cong(const PhanSo &b)
{
    PhanSo tong;
    tong.iTuSo = iTuSo * b.iMauSo + b.iTuSo * iMauSo;
    tong.iMauSo = iMauSo * b.iMauSo;
    ;
    return tong;
}

PhanSo PhanSo ::Tru(const PhanSo &b)
{
    PhanSo hieu;
    hieu.iTuSo = iTuSo * b.iMauSo - b.iTuSo * iMauSo;
    hieu.iMauSo = iMauSo * b.iMauSo;
    return hieu;
}

PhanSo PhanSo ::Nhan(const PhanSo &b)
{
    PhanSo tich;
    tich.iTuSo = iTuSo * b.iTuSo;
    tich.iMauSo = iMauSo * b.iMauSo;
    return tich;
}

PhanSo PhanSo ::Chia(const PhanSo &b)
{
    PhanSo thuong;
    if (b.iTuSo == 0)
    {
        cout << "Loi chia cho 0, tra ve phan so dau tien" << endl;
        return *this;
    }
    thuong.iTuSo = iTuSo * b.iMauSo;
    thuong.iMauSo = iMauSo * b.iTuSo;
    return thuong;
}
