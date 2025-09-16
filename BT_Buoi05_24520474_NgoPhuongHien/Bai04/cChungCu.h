// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cGiaoDich.h"
#include <iostream>

class cChungCu : public cGiaoDich
{
private:
    std ::string macan;
    unsigned int vitritang;

public:
    cChungCu(std ::string mc = "", unsigned char vt = 0) : macan(mc), vitritang(vt) {}
    void Nhap();
    void Xuat();
    double thanhTien();
    unsigned char getViTriTang();
};