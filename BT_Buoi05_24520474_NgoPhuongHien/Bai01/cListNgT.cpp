// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "ChuyenXe.h"
#include "NgoaiThanh.h"
#include "cListNgT.h"
using namespace std;

void NgoaiThanh ::Nhap()
{
    ChuyenXe ::Nhap();
    cout << "Nhap noi den: ";
    cin.ignore();
    getline(cin, noiden);
    cout << "Nhap so ngay di duoc: ";
    cin >> songay;
}

void NgoaiThanh ::Xuat()
{
    ChuyenXe ::Xuat();
    cout << "Noi den: " << noiden << endl;
    cout << "So ngay di duoc: " << songay << endl;
}

cListNgT ::cListNgT(unsigned int n)
{
    this->n = n;
    ngt.resize(n);
}

void cListNgT ::NhapNgt()
{
    cout << "\nNhap so luong chuyen xe ngoai thanh: ";
    cin >> n;
    ngt.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin xe thu " << i + 1 << ".\n";
        ngt[i].Nhap();
    }
}

void cListNgT ::XuatNgt()
{
    cout << "\n----Danh sach chuyen xe ngoai thanh----\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nChuyen xe thu " << i + 1 << ".\n";
        ngt[i].Xuat();
    }
}

unsigned long cListNgT ::TongDoanhThuNgT()
{
    unsigned long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ngt[i].getDoanhThu();
    }
    return sum;
}