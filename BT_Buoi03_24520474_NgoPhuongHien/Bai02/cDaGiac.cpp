#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "cDaGiac.h"
using namespace std;

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

float Diem ::KhoangCach2Diem(const Diem &a)
{
    double dis = sqrt(pow((iHoanhDo - a.iHoanhDo), 2) + pow((iTungDo - a.iTungDo), 2));
    return dis;
}

Diem Diem ::TinhTien(float a, float b)
{
    Diem tt;
    tt.iHoanhDo = iHoanhDo + a;
    tt.iTungDo = iTungDo + b;
    return tt;
}

Diem Diem ::Quay(float goc)
{
    Diem q;
    float rad = goc * M_PI / 180;
    q.iHoanhDo = iHoanhDo * cos(rad) - iTungDo * sin(rad);
    q.iTungDo = iHoanhDo * sin(rad) + iTungDo * cos(rad);
    return q;
}

Diem Diem ::DiChuyenkLan(float k)
{
    return Diem(k * iHoanhDo, k * iTungDo);
}

cDaGiac ::cDaGiac(const vector<Diem> &dg)
{
    this->dg = dg;
    n = dg.size();
}

void cDaGiac ::NhapDG()
{
    cout << "Nhap so dinh cho da giac: ";
    cin >> n;
    dg.resize(n);
    for (int i = 0; i < dg.size(); i++)
    {
        cout << "Nhap toa do dinh thu " << i + 1 << " (nguoc chieu kim dong ho): " << endl;
        dg[i].Nhap();
        cout << "\n";
    }
}

void cDaGiac ::XuatDG() const
{
    for (int i = 0; i < dg.size(); i++)
    {
        cout << "Toa do dinh thu " << i + 1 << ": ";
        cout << "(" << dg[i].iHoanhDo << ", " << dg[i].iTungDo << ")" << endl;
        cout << "\n";
    }
}

string cDaGiac ::KiemTraDG()
{
    if (n < 3)
        return "Khong phai da giac";

    else
    {
        int dau = 0;
        for (int i = 0; i < dg.size(); i++)
        {
            Diem A = dg[i];
            Diem B = dg[(i + 1) % n];
            Diem C = dg[(i + 2) % n];

            float tich_co_huong = (B.iHoanhDo - A.iHoanhDo) * (C.iTungDo - B.iTungDo) -
                                  (B.iTungDo - A.iTungDo) * (C.iHoanhDo - B.iHoanhDo);

            if (tich_co_huong != 0)
            {
                if (dau == 0)
                    dau = (tich_co_huong > 0) ? 1 : -1;
                else if ((tich_co_huong > 0 && dau < 0) || (tich_co_huong < 0 && dau > 0))
                    return "Da giac lom";
            }
        }

        // Da giac deu
        bool deu = false;
        for (int i = 0; i < dg.size() - 2; i++)
        {
            if (dg[i].KhoangCach2Diem(dg[i + 1]) == dg[i + 1].KhoangCach2Diem(dg[i + 2]))
                deu = true;
            else
            {
                deu = false;
                break;
            }
        }
        if (deu == true)
            return "Da giac deu";
        else
            return "Da giac loi";
    }
    return "Da giac khong xac dinh";
}

float cDaGiac ::ChuVi()
{
    float ChuVi = 0;
    if (n >= 3)
    {
        for (int i = 0; i < dg.size(); i++)
        {
            ChuVi += dg[i].KhoangCach2Diem(dg[(i + 1) % n]);
        }
    }
    return ChuVi;
}

float cDaGiac ::DienTich()
{
    float dt = 0;
    for (int i = 0; i < dg.size(); i++)
    {
        int j = (i + 1) % n;
        dt += (dg[i].iHoanhDo * dg[j].iTungDo) - (dg[j].iHoanhDo * dg[i].iTungDo);
    }
    return abs(dt) / 2.0;
}

cDaGiac cDaGiac ::TinhTienDG(float a, float b)
{
    vector<Diem> v;
    for (int i = 0; i < dg.size(); i++)
    {
        v.push_back(dg[i].TinhTien(a, b));
    }
    cDaGiac ds(v);
    return ds;
}

cDaGiac cDaGiac ::QuayDG(float goc)
{
    vector<Diem> v;
    for (int i = 0; i < dg.size(); i++)
    {
        v.push_back(dg[i].Quay(goc));
    }
    cDaGiac ds(v);
    return ds;
}

cDaGiac cDaGiac ::PhongToDG(float k)
{
    vector<Diem> v;
    for (int i = 0; i < dg.size(); i++)
    {
        v.push_back(dg[i].DiChuyenkLan(k));
    }
    cDaGiac ds(v);
    return ds;
}

cDaGiac cDaGiac ::ThuNhoDG(float k)
{
    vector<Diem> v;
    for (int i = 0; i < dg.size(); i++)
    {
        v.push_back(dg[i].DiChuyenkLan(1 / k));
    }
    cDaGiac ds(v);
    return ds;
}
