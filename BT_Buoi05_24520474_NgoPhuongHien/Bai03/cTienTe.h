// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cGiaoDich.h"
#include <iostream>

class cTienTe : public cGiaoDich
{
private:
    unsigned long tigia;
    std ::string loait;

public:
    cTienTe(unsigned long tg = 0, std ::string lt = "") : tigia(tg), loait(lt) {}
    void Nhap();
    void Xuat();
    unsigned long thanhTien();
    std ::string getLoai();
};
