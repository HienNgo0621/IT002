// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include "cGiaoDich.h"
using namespace std;

class cChungCu : public cGiaoDich
{
protected:
    string ma;

public:
    cChungCu(string m = "") : ma(m) {}
    void Xuat() override
    {
        cGiaoDich ::Xuat();
        cout << ma << " " << loai() << endl;
    }
    void Nhap() override
    {
        cGiaoDich ::Nhap();
        cout << "Nhap ma can: ";
        cin.ignore();
        getline(cin, ma);
    }
    virtual unsigned long thanhTien() = 0;
    virtual ~cChungCu() {}
};