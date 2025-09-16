// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "cSoPhuc.h"
using namespace std;

istream &operator>>(istream &in, cSoPhuc &a)
{
    cout << "Nhap phan thuc: ";
    in >> a.iThuc;
    cout << "Nhap phan ao: ";
    in >> a.iAo;
    return in;
}

ostream &operator<<(ostream &out, const cSoPhuc &a)
{
    if (a.iThuc == 0)
    {
        out << a.iAo << "i" << endl;
    }
    else if (a.iAo == 0)
    {
        out << a.iThuc << endl;
    }
    else if (a.iAo == 1)
    {
        out << a.iThuc << "+i" << endl;
    }
    else if (a.iAo == -1)
    {
        out << a.iThuc << "-i" << endl;
    }
    else if (a.iAo < 0)
    {
        out << a.iThuc << a.iAo << "i" << endl;
    }
    else
    {
        out << a.iThuc << "+" << a.iAo << "i" << endl;
    }
    return out;
}

cSoPhuc cSoPhuc ::operator+(const cSoPhuc &a)
{
    return cSoPhuc(iThuc + a.iThuc, iAo + a.iAo);
}

cSoPhuc cSoPhuc ::operator-(const cSoPhuc &a)
{
    return cSoPhuc(iThuc - a.iThuc, iAo - a.iAo);
}

cSoPhuc cSoPhuc ::operator*(const cSoPhuc &a)
{
    return cSoPhuc(iThuc * a.iThuc - iAo * a.iAo, iThuc * a.iAo + iAo * a.iThuc);
}

cSoPhuc cSoPhuc ::operator/(const cSoPhuc &a)
{
    if (a.iThuc == 0 && a.iAo == 0)
    {
        cout << "Phep chia khong hop le!" << endl;
        return cSoPhuc();
    }
    float k = a.iThuc * a.iThuc + a.iAo * a.iAo;
    return cSoPhuc((iThuc * a.iThuc + iAo * a.iAo) / k, (iAo * a.iThuc - iThuc * a.iAo) / k);
}

bool cSoPhuc ::operator==(const cSoPhuc &a)
{
    return (iThuc == a.iThuc && iAo == a.iAo);
}

bool cSoPhuc ::operator!=(const cSoPhuc &a)
{
    return (iThuc != a.iThuc || iAo == a.iAo);
}
