// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class ChuyenXe
{
protected:
    std ::string ms, ten, sxe;
    unsigned long doanhthu;

public:
    ChuyenXe(std ::string id = "", std ::string t = "", std ::string sx = "", unsigned long dt = 0) : ms(id), ten(t), sxe(sx), doanhthu(dt) {}
    void Nhap();
    void Xuat();
    unsigned long getDoanhThu();
};