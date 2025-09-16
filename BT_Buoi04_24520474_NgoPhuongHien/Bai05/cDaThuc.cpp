// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

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
    if (a.iMu == b.iMu)
    {
        sub.iMu = a.iMu;
        sub.iHeSo = a.iHeSo - b.iHeSo;
    }
    return sub;
}

DonThuc operator*(const DonThuc &a, const DonThuc &b)
{
    DonThuc mul;
    mul.iMu = a.iMu + b.iMu;
    mul.iHeSo = a.iHeSo * b.iHeSo;
    return mul;
}

DonThuc operator/(const DonThuc &a, const DonThuc &b)
{
    if (b.iHeSo == 0)
    {
        return DonThuc(0, 0);
    }
    else if (a.iMu < b.iMu)
    {
        return DonThuc(0, 0);
    }
    else
    {
        DonThuc div;
        div.iMu = a.iMu - b.iMu;
        div.iHeSo = a.iHeSo / b.iHeSo;
        return div;
    }
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

// void cDaThuc ::Rutgon(){
//     for (int i = d.size() - 2; i > 0 ; i --){
//         bool daCo = false;
//         for (int j = i - 1; j >= 0; ){
//             if (d[i].iMu == d[j].iMu){
//                 d[i].iHeSo += d[j].iHeSo;
//                 d.erase(d.begin() + j);
//             }
//             else{
//                 j --;
//             }
//         }
//     }
// }

void cDaThuc::Rutgon()
{
    vector<DonThuc> rutGon;

    for (int i = 0; i < d.size(); i++)
    {
        if (d[i].iHeSo == 0)
            continue;

        bool daThem = false;

        for (int j = 0; j < rutGon.size(); j++)
        {
            if (d[i].iMu == rutGon[j].iMu)
            {
                rutGon[j].iHeSo += d[i].iHeSo;

                if (rutGon[j].iHeSo == 0)
                {
                    rutGon.erase(rutGon.begin() + j);
                }

                daThem = true;
                break;
            }
        }

        if (!daThem)
        {
            rutGon.push_back(d[i]);
        }
    }

    d = rutGon;
    n = d.size();
}

cDaThuc cDaThuc ::Tich(const cDaThuc &b)
{
    vector<DonThuc> tich;
    for (int i = d.size() - 1; i >= 0; i--)
    {
        for (int j = b.d.size() - 1; j >= 0; j--)
        {
            DonThuc temp;
            temp = d[i] * b.d[j];
            tich.push_back(temp);
        }
    }
    cDaThuc mul = cDaThuc(tich);
    mul.Rutgon();
    return mul;
}

void cDaThuc::Thuong(const cDaThuc &b, cDaThuc &Thuong, cDaThuc &Du)
{

    if (b.d.empty())
    {
        throw runtime_error("Lỗi: chia cho đa thức 0");
    }

    int bBacCaoNhat = 0;
    float bHeSoCaoNhat = 0;

    for (const auto &term : b.d)
    {
        if (term.iMu > bBacCaoNhat)
        {
            bBacCaoNhat = term.iMu;
            bHeSoCaoNhat = term.iHeSo;
        }
    }

    if (bHeSoCaoNhat == 0)
    {
        throw runtime_error("Lỗi: hệ số cao nhất của đa thức chia là 0");
    }

    Thuong.d.clear();

    Du = *this;

    int duBacCaoNhat = 0;
    for (const auto &term : Du.d)
    {
        if (term.iMu > duBacCaoNhat)
        {
            duBacCaoNhat = term.iMu;
        }
    }

    while (duBacCaoNhat >= bBacCaoNhat)
    {

        float duHeSoCaoNhat = 0;
        for (const auto &term : Du.d)
        {
            if (term.iMu == duBacCaoNhat)
            {
                duHeSoCaoNhat = term.iHeSo;
                break;
            }
        }

        int thuongMu = duBacCaoNhat - bBacCaoNhat;
        float thuongHeSo = duHeSoCaoNhat / bHeSoCaoNhat;

        if (thuongHeSo != 0)
        {
            DonThuc dt;
            dt.iMu = thuongMu;
            dt.iHeSo = thuongHeSo;
            Thuong.d.push_back(dt);
        }

        cDaThuc temp;
        for (const auto &term : b.d)
        {
            DonThuc dt;
            dt.iMu = term.iMu + thuongMu;
            dt.iHeSo = term.iHeSo * thuongHeSo;
            temp.d.push_back(dt);
        }

        Du = Du.Hieu(temp);
        Du.Rutgon();

        duBacCaoNhat = 0;
        for (const auto &term : Du.d)
        {
            if (term.iMu > duBacCaoNhat)
            {
                duBacCaoNhat = term.iMu;
            }
        }
    }
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