// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class cNhanVien
{
protected:
    std ::string ten, ngaysinh;

public:
    cNhanVien(std ::string t = "", std ::string ns = "") : ten(t), ngaysinh(ns) {}
    void Nhap();
    void Xuat();
};