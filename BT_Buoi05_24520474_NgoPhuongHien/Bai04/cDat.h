// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cGiaoDich.h"
#include <iostream>

class cDat : public cGiaoDich
{
private:
    char loaidat;

public:
    cDat(char loai = ' ') : loaidat(loai) {}
    void Nhap();
    void Xuat();
    double thanhTien();
    char getLoaiDat();
};