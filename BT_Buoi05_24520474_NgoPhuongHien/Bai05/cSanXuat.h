// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cNhanVien.h"
#include <iostream>

class cSanXuat : public cNhanVien
{
private:
    unsigned long luongcanban;
    unsigned int sosp;

public:
    cSanXuat(unsigned long lcb = 0, unsigned int sp = 0) : luongcanban(lcb), sosp(sp) {}
    void Nhap();
    void Xuat();
    unsigned long tinhLuong();
};