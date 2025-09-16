// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cGiaoDich.h"
#include <iostream>

class cVang : public cGiaoDich
{
private:
    std ::string loaiv;

public:
    cVang(std ::string lv = "") : loaiv(lv) {}
    void Nhap();
    void Xuat();
    unsigned long thanhTien();
};
