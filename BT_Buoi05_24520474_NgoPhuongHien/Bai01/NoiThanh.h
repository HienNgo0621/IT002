// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "ChuyenXe.h"
#include <iostream>

class NoiThanh : public ChuyenXe
{
private:
    unsigned int sotuyen, sokm;

public:
    NoiThanh(unsigned int st = 0, unsigned int km = 0) : sotuyen(st), sokm(km) {}
    void Nhap();
    void Xuat();
};