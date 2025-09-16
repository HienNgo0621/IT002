// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class cGiaoDich
{
protected:
    std ::string ma, ngay;
    unsigned long gia;
    unsigned int soluong;

public:
    cGiaoDich(std ::string m = "", std ::string n = "", unsigned long g = 0, unsigned int sl = 0) : ma(m), ngay(n), gia(g), soluong(sl) {}
    void Nhap();
    void Xuat();
};