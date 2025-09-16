// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class cSach
{
protected:
    std ::string ms, ngaynhap, nxb;
    unsigned long gia;
    unsigned int soluong;

public:
    cSach(std ::string ms = "", std ::string ngay = "", std ::string nxb = "", unsigned long g = 0, unsigned int sl = 0) : ms(ms), ngaynhap(ngay), nxb(nxb), gia(g), soluong(sl) {}
    void Nhap();
    void Xuat();
    std ::string getNXB();
    unsigned long getGia();
};