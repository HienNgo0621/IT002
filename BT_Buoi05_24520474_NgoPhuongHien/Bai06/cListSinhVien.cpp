// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cListSinhVien.h"
#include "cCaoDang.h"
#include "cDaiHoc.h"
#include <iostream>
#include <vector>
using namespace std;

cListSinhVien ::cListSinhVien(const std ::vector<cCaoDang> &a, const std ::vector<cDaiHoc> &b)
{
    cd = a;
    dh = b;
}

void cListSinhVien ::NhapCD(unsigned int n)
{
    cout << "Nhap so luong sinh vien cao dang: ";
    cin >> n;
    cd.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "+ Nhap sinh vien cao dang thu " << i + 1 << ".\n";
        cd[i].Nhap();
    }
}

void cListSinhVien ::NhapDH(unsigned int n)
{
    cout << "Nhap so luong sinh vien dai hoc: ";
    cin >> n;
    dh.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "+ Nhap sinh vien dai hoc thu " << i + 1 << ".\n";
        dh[i].Nhap();
    }
}

void cListSinhVien ::XuatDS()
{
    for (int i = 0; i < cd.size(); i++)
    {
        cd[i].Xuat();
    }

    for (int i = 0; i < dh.size(); i++)
    {
        dh[i].Xuat();
    }
}

cListSinhVien cListSinhVien ::DuDKTN()
{
    vector<cCaoDang> du1;
    vector<cDaiHoc> du2;

    for (int i = 0; i < cd.size(); i++)
    {
        if (cd[i].XetTN())
            du1.push_back(cd[i]);
    }

    for (int i = 0; i < dh.size(); i++)
    {
        if (dh[i].XetTN())
            du2.push_back(dh[i]);
    }

    return cListSinhVien(du1, du2);
}

cListSinhVien cListSinhVien ::KhongDuDKTN()
{
    vector<cCaoDang> kdu1;
    vector<cDaiHoc> kdu2;

    for (int i = 0; i < cd.size(); i++)
    {
        if (!cd[i].XetTN())
            kdu1.push_back(cd[i]);
    }

    for (int i = 0; i < dh.size(); i++)
    {
        if (!dh[i].XetTN())
            kdu2.push_back(dh[i]);
    }

    return cListSinhVien(kdu1, kdu2);
}

cListSinhVien cListSinhVien ::DTB_CaoNhat_DaiHoc()
{
    vector<cDaiHoc> maxDTB;
    float max = dh[0].getDTB();
    for (int i = 1; i < dh.size(); i++)
    {
        float k = dh[i].getDTB();
        if (max < k)
            max = k;
    }

    for (int i = 1; i < dh.size(); i++)
    {
        if (max == dh[i].getDTB())
            maxDTB.push_back(dh[i]);
    }
    return cListSinhVien({}, maxDTB);
}