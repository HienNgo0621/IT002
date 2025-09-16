// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26// MSSV: 24520474

#pragma once
#include "ChuyenXe.h"
#include <iostream>

class NgoaiThanh : public ChuyenXe
{
private:
    unsigned int songay;
    std ::string noiden;

public:
    NgoaiThanh(unsigned int sn = 0, std ::string nd = "") : songay(sn), noiden(nd) {}
    void Nhap();
    void Xuat();
};