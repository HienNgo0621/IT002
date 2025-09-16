// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cTienTe.h"
#include "cVang.h"
#include "cListGiaoDich.h"
#include <iostream>
#include <limits>
using namespace std;

cListGiaoDich ::cListGiaoDich(int n, int m)
{
    v.resize(n);
    n = v.size();
    t.resize(m);
    m = t.size();
}

cListGiaoDich ::cListGiaoDich(const std ::vector<cVang> &v, const std ::vector<cTienTe> &t)
{
    this->v = v;
    n = v.size();
    this->t = t;
    m = t.size();
}

void cListGiaoDich ::NhapVang()
{
    cout << "Nhap so luong giao dich: ";
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "+ Nhap thong tin giao dich vang thu " << i + 1 << ".\n";
        v[i].Nhap();
    }
}

void cListGiaoDich ::XuatVang()
{
    for (int i = 0; i < n; i++)
    {
        v[i].Xuat();
    }
}

void cListGiaoDich ::NhapTien()
{
    cout << "Nhap so luong giao dich: ";
    cin >> m;
    t.resize(m);
    for (int i = 0; i < m; i++)
    {
        cout << "+ Nhap thong tin giao dich tien te thu " << i + 1 << ".\n";
        t[i].Nhap();
    }
}

void cListGiaoDich ::XuatTien()
{
    for (int i = 0; i < m; i++)
    {
        t[i].Xuat();
    }
}

cListGiaoDich cListGiaoDich ::Max_Vang()
{
    vector<cVang> max;
    unsigned long maxv = v[0].thanhTien();
    for (int i = 0; i < n; i++)
    {
        unsigned long k = v[i].thanhTien();
        if (maxv < k)
            maxv = k;
    }

    for (int i = 0; i < n; i++)
    {
        unsigned long k = v[i].thanhTien();
        if (maxv == k)
            max.push_back(v[i]);
    }
    return cListGiaoDich(max, {});
}

cListGiaoDich cListGiaoDich ::Min_Euro()
{
    vector<cTienTe> minE;
    unsigned long min = numeric_limits<unsigned long>::max();
    for (int i = 0; i < m; i++)
    {
        if (t[i].getLoai() == "EURO" && (min > t[i].thanhTien()))
            min = t[i].thanhTien();
    }

    for (int i = 0; i < m; i++)
    {
        if (t[i].getLoai() == "EURO" && (min == t[i].thanhTien()))
            minE.push_back(t[i]);
    }
    return cListGiaoDich({}, minE);
}

cListGiaoDich cListGiaoDich ::GD_tren_1ty()
{
    vector<cVang> gd1;
    vector<cTienTe> gd2;
    for (int i = 0; i < n; i++)
    {
        if (v[i].thanhTien() > 1000000000)
            gd1.push_back(v[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (t[i].thanhTien() > 1000000000)
            gd2.push_back(t[i]);
    }

    return cListGiaoDich(gd1, gd2);
}