// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cSach.h"
#include "cSachGK.h"
#include "cSachTK.h"
#include "cListSach.h"
#include <vector>
#include <iostream>
using namespace std;

cListSach ::cListSach(int n, int m)
{
    gk.resize(n);
    n = gk.size();
    tk.resize(m);
    m = tk.size();
}

cListSach ::cListSach(const std ::vector<cSachGK> &g, const std ::vector<cSachTK> &t)
{
    gk = g;
    n = g.size();
    tk = t;
    m = t.size();
}

void cListSach ::NhapGK()
{
    cout << "Nhap so luong sach giao khoa: ";
    cin >> n;
    gk.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "+ Nhap thong tin sach thu " << i + 1 << ".\n";
        gk[i].Nhap();
    }
}

void cListSach ::NhapTK()
{
    cout << "Nhap so luong sach tham khao: ";
    cin >> m;
    tk.resize(m);
    for (int i = 0; i < m; i++)
    {
        cout << "+ Nhap thong tin sach thu " << i + 1 << ".\n";
        tk[i].Nhap();
    }
}

void cListSach ::XuatGK()
{
    for (int i = 0; i < n; i++)
    {
        gk[i].Xuat();
    }
}

void cListSach ::XuatTK()
{
    for (int i = 0; i < m; i++)
    {
        tk[i].Xuat();
    }
}

unsigned long cListSach ::tongThanhTienGK()
{
    unsigned long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += gk[i].thanhTien();
    }
    return sum;
}

unsigned long cListSach ::tongThanhTienTK()
{
    unsigned long sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += tk[i].thanhTien();
    }
    return sum;
}

double cListSach ::TBDonGiaTK()
{
    unsigned long sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += tk[i].getGia();
    }
    return (sum / m);
}

cListSach cListSach ::NXB_GK(string s)
{
    vector<cSachGK> nxb;
    for (int i = 0; i < n; i++)
    {
        if (s == gk[i].getNXB())
            nxb.push_back(gk[i]);
    }
    return cListSach(nxb, {});
}