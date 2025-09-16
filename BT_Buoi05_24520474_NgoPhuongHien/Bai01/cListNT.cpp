// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "ChuyenXe.h"
#include "NoiThanh.h"
#include "cListNT.h"
using namespace std;

void NoiThanh ::Nhap()
{
    ChuyenXe ::Nhap();
    cout << "Nhap so tuyen: ";
    cin >> sotuyen;
    cout << "Nhap so km: ";
    cin >> sokm;
}

void NoiThanh ::Xuat()
{
    ChuyenXe ::Xuat();
    cout << "So tuyen: " << sotuyen << endl;
    cout << "So km: " << sokm << endl;
}

cListNT ::cListNT(unsigned int n)
{
    this->n = n;
    nt.resize(n);
}

void cListNT ::NhapNt()
{
    cout << "Nhap so luong chuyen xe noi thanh: ";
    cin >> n;
    nt.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin xe thu " << i + 1 << ".\n";
        nt[i].Nhap();
    }
}

void cListNT ::XuatNt()
{
    cout << "\n----Danh sach chuyen xe noi thanh---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nChuyen xe thu " << i + 1 << ".\n";
        nt[i].Xuat();
    }
}

unsigned long cListNT ::TongDoanhThuNT()
{
    unsigned long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nt[i].getDoanhThu();
    }
    return sum;
}