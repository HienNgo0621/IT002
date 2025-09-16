// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cSach.h"
#include <iostream>

class cSachTK : public cSach
{
private:
    unsigned long thue;

public:
    cSachTK(unsigned long t = 0) : thue(t) {}
    void Nhap();
    void Xuat();
    unsigned long thanhTien();
};