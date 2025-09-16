// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
using namespace std;

class cSinhVien
{
protected:
    std ::string ms, ten, diachi;
    unsigned int tinchi;
    float diemTB;

public:
    cSinhVien(std ::string ms = "", std ::string t = "", std ::string dc = "", unsigned int tc = 0, float tb = 0) : ms(ms), ten(t), diachi(dc), tinchi(tc), diemTB(tb) {}
    virtual void Nhap();
    virtual void Xuat();
    virtual bool XetTN() = 0;
    virtual string loai() = 0;
    virtual ~cSinhVien() {}
    float getDTB() { return diemTB; }
};