// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cListNhanVien.h"
#include "cSanXuat.h"
#include "cVanPhong.h"
#include <vector>
#include <iostream>
using namespace std;

// cListNhanVien ::cListNhanVien(const std ::vector<cSanXuat> &a, const std ::vector<cVanPhong> &b){
//     sx = a;
//     vp = b;
// }

void cListNhanVien ::NhapSX(unsigned n)
{
    cout << "Nhap so luong nhan vien san xuat: ";
    cin >> n;
    sx.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "+ Nhap thong tin nhan vien san xuat thu " << i + 1 << ".\n";
        sx[i].Nhap();
    }
}

void cListNhanVien ::NhapVP(unsigned n)
{
    cout << "Nhap so luong nhan vien van phong: ";
    cin >> n;
    vp.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "+ Nhap thong tin nhan vien van phong thu " << i + 1 << ".\n";
        vp[i].Nhap();
    }
}

void cListNhanVien ::XuatDS()
{
    for (int i = 0; i < sx.size(); i++)
    {
        sx[i].Xuat();
    }
    for (int i = 0; i < vp.size(); i++)
    {
        vp[i].Xuat();
    }
}

unsigned long cListNhanVien ::tinhTongLuong()
{
    unsigned long sum = 0;
    for (int i = 0; i < sx.size(); i++)
    {
        sum += sx[i].tinhLuong();
    }
    for (int i = 0; i < vp.size(); i++)
    {
        sum += vp[i].tinhLuong();
    }
    return sum;
}