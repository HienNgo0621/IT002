// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include "cGiaoDich.h"
using namespace std;

class cNha : public cGiaoDich
{
protected:
    string diachi;

public:
    void Nhap() override
    {
        cGiaoDich ::Nhap();
        cout << "Nhap dia chi: ";
        cin.ignore();
        getline(cin, diachi);
    }
    void Xuat() override
    {
        cGiaoDich ::Xuat();
        cout << loai() << " " << diachi << endl;
    }
    virtual string loai() = 0;
    virtual unsigned long thanhTien() = 0;
    virtual ~cNha() {}
};