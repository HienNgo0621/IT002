// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class cGiaoDich
{
protected:
    std ::string ma;
    unsigned long gia;
    float dientich;
    unsigned int ngay, thang;
    unsigned int nam;

public:
    cGiaoDich(std ::string m = "", float dt = 0, unsigned long g = 0, unsigned int day = 1, unsigned int month = 1, unsigned int year = 1) : ma(m), dientich(dt), gia(g), ngay(gia), thang(month), nam(year) {}
    void Nhap();
    void Xuat();
    unsigned int getThang();
    unsigned int getNam();
};