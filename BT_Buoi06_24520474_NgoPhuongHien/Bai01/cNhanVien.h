// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class cNhanVien
{
protected:
    std ::string ten;
    unsigned int ngay, thang, nam;

public:
    cNhanVien(std ::string t = "", unsigned int d = 1, unsigned m = 1, unsigned int y = 1) : ten(t), ngay(d), thang(m), nam(y) {}
    virtual void Nhap();
    virtual void Xuat();
    virtual unsigned long tinhLuong() = 0;
    virtual std ::string loai() = 0;
    unsigned int getNam() { return nam; }
    virtual ~cNhanVien() {}
};