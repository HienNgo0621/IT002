// Mã số sinh viên:24520474
// Họ và tên: Ngô Phương Hiền
// Ngày sinh:21/06/2006
// Lớp: IT002.P26.1

#include "DSSV.h"
#include <iostream>
#include <vector>
using namespace std;

// Cao dang
istream &operator>>(istream &in, SVCD &a)
{
    cout << "Nhap MSSV: ";
    in >> a.id;
    cout << "Nhap ho va ten sinh vien: ";
    in >> ws;
    getline(in, a.ten);
    cout << "Nhap dia chi cua sinh vien: ";
    in >> ws;
    getline(in, a.diachi);
    cout << "Nhap tong so tin chi cua sinh vien: ";
    in >> a.tinchi;
    cout << "Nhap diem trung binh cua sinh vien: ";
    in >> a.dtb;
    cout << "Nhap diem thi tot nghiep cua sinh vien: ";
    in >> a.dtn;
    return in;
}

ostream &operator<<(ostream &out, const SVCD &a)
{
    out << a.id << " " << a.ten << " " << a.diachi << " " << a.tinchi << " " << a.dtb << " " << a.dtn << endl;
    return out;
}

bool SVCD ::DuDKTN()
{
    return (tinchi >= 110 && dtb >= 5 && dtn >= 5);
}

// Dai hoc
istream &operator>>(istream &in, SVDH &a)
{
    cout << "Nhap MSSV: ";
    in >> a.id;
    cout << "Nhap ho va ten sinh vien: ";
    in >> ws;
    getline(in, a.ten);
    cout << "Nhap dia chi cua sinh vien: ";
    in >> ws;
    getline(in, a.diachi);
    cout << "Nhap tong so tin chi cua sinh vien: ";
    in >> a.tinchi;
    cout << "Nhap diem trung binh cua sinh vien: ";
    in >> a.dtb;
    cout << "Nhap ten luan van cua sinh vien: ";
    in >> ws;
    getline(in, a.tenlv);
    cout << "Nhap diem luan van cua sinh vien: ";
    in >> a.dlv;
    return in;
}

ostream &operator<<(ostream &out, const SVDH &a)
{
    out << a.id << " " << a.ten << " " << a.diachi << " " << a.tinchi << " " << a.dtb << " " << a.tenlv << " " << a.dlv << endl;
    return out;
}

bool SVDH ::DuDKTN()
{
    return (tinchi >= 145 && dtb >= 5 && dlv >= 5);
}

// DSSV

DSSV ::DSSV(const vector<SVCD> &a, const vector<SVDH> &b)
{
    cd = a;
    x = a.size();
    dh = b;
    y = b.size();
}

void DSSV ::Nhap()
{
    cout << "Nhap so luong sinh vien cao dang: ";
    cin >> x;
    cd.resize(x);
    cout << "----Nhap danh sach sinh vien cao dang----" << endl;
    for (int i = 0; i < cd.size(); i++)
    {
        cout << "Sinh vien thu " << i + 1 << endl;
        cin >> cd[i];
    }
    cout << "\nNhap so luong sinh vien dai hoc: ";
    cin >> y;
    dh.resize(y);
    cout << "----Nhap danh sach sinh vien dai hoc----" << endl;
    for (int i = 0; i < dh.size(); i++)
    {
        cout << "Sinh vien thu " << i + 1 << endl;
        cin >> dh[i];
    }
}

void DSSV ::Xuat()
{
    for (int i = 0; i < cd.size(); i++)
    {
        cout << cd[i];
    }

    for (int i = 0; i < dh.size(); i++)
    {
        cout << dh[i];
    }
}

int DSSV ::SVDuDKTN()
{
    int cnt = 0;
    for (int i = 0; i < cd.size(); i++)
    {
        if (cd[i].DuDKTN())
            cnt++;
    }
    for (int i = 0; i < dh.size(); i++)
    {
        if (dh[i].DuDKTN())
            cnt++;
    }
    return cnt;
}

DSSV DSSV ::MaxDTB()
{
    vector<SVDH> maxTB;
    float max = dh[0].dtb;
    for (int i = 1; i < dh.size(); i++)
    {
        if (max < dh[i].dtb)
            max = dh[i].dtb;
    }

    for (int i = 0; i < dh.size(); i++)
    {
        if (dh[i].dtb == max)
            maxTB.push_back(dh[i]);
    }
    return DSSV({}, maxTB);
}
