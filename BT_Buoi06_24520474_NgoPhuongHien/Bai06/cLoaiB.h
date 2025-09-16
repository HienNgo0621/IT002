// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cKhachHang.h"
#include <iostream>
using namespace std;

class cLoaiB : public cKhachHang
{
private:
    unsigned int sonam;

public:
    cLoaiB(unsigned int nam = 0) : sonam(nam) {}
    void Nhap(istream &in) override
    {
        cKhachHang ::Nhap(in);
        in >> sonam;
    }
    unsigned long soTien()
    {
        float phantramKM = max(float(sonam) * 0.05f, 0.5f);
        unsigned long tienGiam = (soluong * dongia) * (1.0f - phantramKM);
        return tienGiam * thue();
    }
    string loai() { return "than thiet"; }
    ~cLoaiB() {}
};