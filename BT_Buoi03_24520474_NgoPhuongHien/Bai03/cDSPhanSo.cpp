#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "cDSPhanSo.h"
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

istream &operator>>(istream &in, PhanSo &a)
{
    cout << "Nhap tu so: ";
    in >> a.iTuSo;
    cout << "Nhap mau so: ";
    in >> a.iMauSo;
    a.RutGon();
    return in;
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

ostream &operator<<(ostream &out, const PhanSo &a)
{
    if (a.iMauSo == 1 || a.iTuSo == 0)
    {
        out << a.iTuSo << endl;
    }
    else
        out << a.iTuSo << "/" << a.iMauSo << endl;
    return out;
}

PhanSo operator+(const PhanSo &a, const PhanSo &b)
{
    PhanSo sum;
    sum.iTuSo = a.iTuSo * b.iMauSo + b.iTuSo * a.iMauSo;
    sum.iMauSo = a.iMauSo * b.iMauSo;
    sum.RutGon();
    return sum;
}

bool operator<(const PhanSo &a, const PhanSo &b)
{
    return a.iTuSo * b.iMauSo < b.iTuSo * a.iMauSo;
}

cDSPhanSo ::cDSPhanSo(const std ::vector<PhanSo> &ds)
{
    this->ds = ds;
    n = ds.size();
}

void cDSPhanSo::NhapDS()
{
    cout << "Nhap so luong phan tu cho danh sach: ";
    cin >> n;
    ds.resize(n);
    for (int i = 0; i < ds.size(); i++)
    {
        cout << "\nNhap phan so thu " << i + 1 << "." << endl;
        cin >> ds[i];
    }
}

void cDSPhanSo::XuatDS()
{
    for (int i = 0; i < ds.size(); i++)
    {
        cout << ds[i];
    }
}

PhanSo cDSPhanSo::Tong()
{
    PhanSo sumList(0);
    for (int i = 0; i < ds.size(); i++)
    {
        sumList = sumList + ds[i];
    }
    return sumList;
}

PhanSo cDSPhanSo::PSLonNhat()
{
    PhanSo max = ds[0];
    for (int i = 1; i < ds.size(); i++)
    {
        if (max < ds[i])
            max = ds[i];
    }
    return max;
}

PhanSo cDSPhanSo::PSNhoNhat()
{
    PhanSo min = ds[0];
    for (int i = 1; i < ds.size(); i++)
    {
        if (ds[i] < min)
            min = ds[i];
    }
    return min;
}

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool cDSPhanSo::Tu_maxSNT(PhanSo &maxTu)
{
    bool found = false;
    for (int i = 0; i < ds.size(); i++)
    {
        int tu = ds[i].iTuSo;
        if (isPrime(ds[i].iTuSo))
        {
            if (!found || tu > maxTu.iTuSo)
                maxTu = ds[i];
            found = true;
        }
    }
    return found;
}

// Sort

void Swap(PhanSo &a, PhanSo &b)
{
    PhanSo temp = a;
    a = b;
    b = temp;
}

int Partition(vector<PhanSo> &v, int low, int high)
{
    PhanSo pivot = v[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if ((v[j].iTuSo * pivot.iMauSo) < (pivot.iTuSo * v[j].iMauSo))
        {
            i++;
            Swap(v[i], v[j]);
        }
    }
    Swap(v[i + 1], v[high]);
    return i + 1;
}

void QuickSort(vector<PhanSo> &v, int low, int high)
{
    if (low < high)
    {
        int pi = Partition(v, low, high);
        QuickSort(v, low, pi - 1);
        QuickSort(v, pi + 1, high);
    }
}

cDSPhanSo cDSPhanSo::DS_Tang()
{
    QuickSort(ds, 0, ds.size() - 1);
    return cDSPhanSo(ds);
}

cDSPhanSo cDSPhanSo::DS_Giam()
{
    vector<PhanSo> dsCopy = ds;
    reverse(dsCopy.begin(), dsCopy.end());
    return cDSPhanSo(dsCopy);
}
