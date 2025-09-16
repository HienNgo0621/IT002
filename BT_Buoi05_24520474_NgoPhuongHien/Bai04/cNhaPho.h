// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cGiaoDich.h"
#include <iostream>

class cNhaPho : public cGiaoDich
{
private:
    std ::string loainha, diachi;

public:
    cNhaPho(std ::string loai = "", std ::string dc = "") : loainha(loai), diachi(dc) {}
    void Nhap();
    void Xuat();
    double thanhTien();
    std ::string getLoaiNha();
};