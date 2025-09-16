// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class cSinhVien
{
protected:
    std ::string ms, ten, diachi;
    unsigned int tinchi;
    float diemTB;

public:
    cSinhVien(std ::string ms = "", std ::string t = "", std ::string dc = "", unsigned int tc = 0, float tb = 0) : ms(ms), ten(t), diachi(dc), tinchi(tc), diemTB(tb) {}
    void Nhap();
    void Xuat();
};