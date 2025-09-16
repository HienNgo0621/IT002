#include <iostream>
#include <vector>
#include <algorithm>
#include "cDaThuc.h"
using namespace std;

float DonThuc ::giaTri(float x)
{
    float result = 1;
    for (int i = 0; i < iMu; ++i)
        result *= x;
    return iHeSo * result;
}

DonThuc operator+(const DonThuc &a, const DonThuc &b)
{
    DonThuc sum;
    if (a.iMu == b.iMu)
    {
        sum.iMu = a.iMu;
        sum.iHeSo = a.iHeSo + b.iHeSo;
    }
    return sum;
}

DonThuc operator-(const DonThuc &a, const DonThuc &b)
{
    DonThuc sub;
    sub.iMu = a.iMu;
    sub.iHeSo = a.iHeSo - b.iHeSo;
    return sub;
}

cDaThuc ::cDaThuc(const std ::vector<DonThuc> &a)
{
    d = a;
    n = a.size();
}

void cDaThuc ::Nhap()
{
    cout << "Nhap so bac cua da thuc: ";
    cin >> n;
    d.resize(n + 1);
    for (int i = d.size() - 1; i >= 0; i--)
    {
        d[i].iMu = i;
        cout << "Bac " << i << endl;
        cout << "Nhap he so: ";
        cin >> d[i].iHeSo;
    }
}

void cDaThuc ::Xuat()
{
    bool daIn = false;

    for (int i = 0; i < d.size(); i++)
    {
        int hs = d[i].iHeSo;
        int mu = d[i].iMu;

        if (hs == 0)
            continue;

        if (daIn)
        {
            if (hs > 0)
                cout << "+";
        }
        else
        {
            daIn = true;
        }

        if (mu == 0)
        {
            cout << hs;
        }
        else if (mu == 1)
        {
            if (hs == 1)
                cout << "x";
            else if (hs == -1)
                cout << "-x";
            else
                cout << hs << "x";
        }
        else
        {
            if (hs == 1)
                cout << "x^" << mu;
            else if (hs == -1)
                cout << "-x^" << mu;
            else
                cout << hs << "x^" << mu;
        }
    }

    if (!daIn)
        cout << "0";
    cout << endl;
}

cDaThuc cDaThuc ::Tong(const cDaThuc &b)
{
    vector<DonThuc> tong;
    int maxBac = max(d.size() - 1, b.d.size() - 1);
    for (int i = maxBac; i >= 0; i--)
    {
        float heSoA = 0, heSoB = 0;

        for (int j = d.size() - 1; j >= 0; j--)
        {
            if (d[j].iMu == i)
            {
                heSoA = d[j].iHeSo;
                break;
            }
        }

        for (int j = b.d.size() - 1; j >= 0; j--)
        {
            if (b.d[j].iMu == i)
            {
                heSoB = b.d[j].iHeSo;
                break;
            }
        }

        float tongHeSo = heSoA + heSoB;
        if (tongHeSo != 0)
        {
            DonThuc dt;
            dt.iHeSo = tongHeSo;
            dt.iMu = i;
            tong.push_back(dt);
        }
    }
    return cDaThuc(tong);
}

cDaThuc cDaThuc ::Hieu(const cDaThuc &b)
{
    vector<DonThuc> hieu;
    int maxMu = max(d.size() - 1, b.d.size() - 1);
    for (int i = maxMu; i >= 0; i--)
    {
        float heSoA = 0, heSoB = 0;

        for (int j = d.size() - 1; j >= 0; j--)
        {
            if (d[j].iMu == i)
            {
                heSoA = d[j].iHeSo;
                break;
            }
        }

        for (int j = b.d.size() - 1; j >= 0; j--)
        {
            if (b.d[j].iMu == i)
            {
                heSoB = b.d[j].iHeSo;
                break;
            }
        }

        float hieuHeSo = heSoA - heSoB;
        if (hieuHeSo != 0)
        {
            DonThuc dt;
            dt.iHeSo = hieuHeSo;
            dt.iMu = i;
            hieu.push_back(dt);
        }
    }
    return cDaThuc(hieu);
}

float cDaThuc ::giaTriDT(float x)
{
    float val = 0;
    for (int i = d.size() - 1; i >= 0; i--)
    {
        val += d[i].giaTri(x);
    }
    return val;
}