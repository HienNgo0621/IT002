// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cNhanVien.h"
#include "cVanPhong.h"
#include "cSanXuat.h"
#include <vector>
#include <limits>
#include <iostream>
using namespace std;

int main()
{
    vector<cNhanVien *> ds;
    unsigned int n;
    cout << "Nhap so luong nhan vien cua cong ty: ";
    cin >> n;
    ds.resize(n);

    cout << "---Nhap danh sach nhan vien---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "+ Thong tin nhan vien thu " << i + 1 << endl;
        unsigned short loai;
        cout << "Chon loai nhan vien (1: San Xuat, 2: Van Phong): ";
        cin >> loai;
        if (loai == 1)
        {
            ds[i] = new cSanXuat;
        }
        else
        {
            ds[i] = new cVanPhong;
        }
        ds[i]->Nhap();
    }

    cout << "\n\n---Danh sach thong tin nhan vien---\n";
    for (int i = 0; i < n; i++)
    {
        ds[i]->Xuat();
    }

    unsigned long tongLuong = 0;
    for (int i = 0; i < n; i++)
    {
        tongLuong += ds[i]->tinhLuong();
    }
    cout << "\n\nTong luong ma cong ty phai tra: " << tongLuong << endl;

    unsigned long luongThap = numeric_limits<unsigned long>::max();
    cout << "\nNhan vien san xuat co luong thap nhat.\n";
    for (int i = 0; i < n; i++)
    {
        if (ds[i]->loai() == "San Xuat" && ds[i]->tinhLuong() < luongThap)
            luongThap = ds[i]->tinhLuong();
    }
    for (int i = 0; i < n; i++)
    {
        if (ds[i]->loai() == "San Xuat" && ds[i]->tinhLuong() == luongThap)
            ds[i]->Xuat();
    }

    unsigned int tuoiCao = numeric_limits<unsigned long>::min();
    cout << "\nNhan vien van phong co tuoi cao nhat.\n";
    for (int i = 0; i < n; i++)
    {
        unsigned int tuoi = 2025 - ds[i]->getNam();
        if (ds[i]->loai() == "Van Phong" && tuoiCao < tuoi)
            tuoiCao = tuoi;
    }
    for (int i = 0; i < n; i++)
    {
        unsigned int tuoi = 2025 - ds[i]->getNam();
        if (ds[i]->loai() == "Van Phong" && tuoi == tuoiCao)
            ds[i]->Xuat();
    }

    system("pause");
    return 0;
}