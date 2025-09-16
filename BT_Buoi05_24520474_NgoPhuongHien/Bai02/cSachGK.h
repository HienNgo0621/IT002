// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cSach.h"
#include <iostream>

class cSachGK : public cSach
{
private:
    bool tinhtrang;

public:
    cSachGK(bool tt = 1) : tinhtrang(tt) {}
    void Nhap();
    void Xuat();
    unsigned long thanhTien();
};