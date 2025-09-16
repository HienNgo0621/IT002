// Mã số sinh viên:24520474
// Họ và tên: Ngô Phương Hiền
// Ngày sinh:21/06/2006
// Lớp: IT002.P26.1

#include <iostream>
#include <string>
#include "DSSach.h"
#include <vector>
using namespace std;

// SachGk
istream &operator>>(istream &in, SachGK &a)
{
    cout << "Nhap ma sach: ";
    in >> a.id;
    cout << "Nhap ten sach: ";
    in >> ws;
    getline(in, a.ten);
    cout << "Nhap ten nha xuat ban: ";
    in >> ws;
    getline(in, a.nxb);
    cout << "Nhap so luong: ";
    in >> a.soluong;
    cout << "Nhap don gia: ";
    in >> a.gia;
    cout << "Nhap tinh trang (moi: 1, cu: 0): ";
    in >> a.tinhtrang;
    return in;
}

ostream &operator<<(ostream &out, const SachGK &a)
{
    out << a.id << " " << a.ten << " " << a.nxb << " " << a.soluong << " " << a.gia << " " << a.tinhtrang << endl;
    return out;
}

double SachGK ::ThanhTien()
{
    if (tinhtrang == 1)
        return (double)soluong * gia;
    return (double)soluong * gia * 0.5;
}

// SachTk
istream &operator>>(istream &in, SachTK &a)
{
    cout << "Nhap ma sach: ";
    in >> a.id;
    cout << "Nhap ten sach: ";
    in >> ws;
    getline(in, a.ten);
    cout << "Nhap ten nha xuat ban: ";
    in >> ws;
    getline(in, a.nxb);
    cout << "Nhap so luong: ";
    in >> a.soluong;
    cout << "Nhap don gia: ";
    in >> a.gia;
    cout << "Nhap tien thue: ";
    in >> a.thue;
    return in;
}

ostream &operator<<(ostream &out, const SachTK &a)
{
    out << a.id << " " << a.ten << " " << a.nxb << " " << a.soluong << " " << a.gia << " " << a.thue << endl;
    return out;
}

double SachTK ::ThanhTien()
{
    return (double)soluong * gia + thue;
}

// Dssach
DSSach ::DSSach(const std ::vector<SachGK> &a, const std ::vector<SachTK> &b)
{
    gk = a;
    x = a.size();
    tk = b;
    y = b.size();
}

void DSSach ::Nhap()
{
    cout << "Nhap so luong sach giao khoa: ";
    cin >> x;
    gk.resize(x);
    for (int i = 0; i < gk.size(); i++)
    {
        cout << "Nhap thong tin quyen thu " << i + 1 << "." << endl;
        cin >> gk[i];
    }

    cout << "\nNhap so luong sach tham khao: ";
    cin >> y;
    tk.resize(y);
    for (int i = 0; i < tk.size(); i++)
    {
        cout << "Nhap thong tin quyen thu " << i + 1 << "." << endl;
        cin >> tk[i];
    }
}

void DSSach ::Xuat()
{
    for (int i = 0; i < gk.size(); i++)
    {
        cout << gk[i];
    }

    for (int i = 0; i < tk.size(); i++)
    {
        cout << tk[i];
    }
}

DSSach DSSach ::MinThanhTien()
{
    vector<SachGK> minGk;
    vector<SachTK> minTk;
    double min = gk[0].ThanhTien();
    for (int i = 1; i < gk.size(); i++)
    {
        double tt = gk[i].ThanhTien();
        if (min > tt)
            min = tt;
    }
    for (int i = 0; i < tk.size(); i++)
    {
        double tt = tk[i].ThanhTien();
        if (min > tt)
            min = tt;
    }

    for (int i = 0; i < gk.size(); i++)
    {
        double tt = gk[i].ThanhTien();
        if (min == tt)
            minGk.push_back(gk[i]);
    }
    for (int i = 0; i < tk.size(); i++)
    {
        double tt = tk[i].ThanhTien();
        if (min == tt)
            minTk.push_back(tk[i]);
    }

    return DSSach(minGk, minTk);
}

DSSach DSSach ::NXB_GK(string n)
{
    vector<SachGK> NXBGk;
    for (int i = 0; i < gk.size(); i++)
    {
        if (gk[i].nxb == n)
            NXBGk.push_back(gk[i]);
    }
    return DSSach(NXBGk, {});
}