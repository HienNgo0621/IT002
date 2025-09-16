#pragma once
#include <string>
#include "cNhanVienSX.h"
#include <vector>

class DSNhanVien
{
private:
    std ::vector<cNhanVienSX> ds;
    int n;

public:
    DSNhanVien() : n(0) {}
    DSNhanVien(const std ::vector<cNhanVienSX> &a);
    void Nhap(int n);
    void Xuat();
    DSNhanVien minLuong();
    long long TongLuong();
    DSNhanVien maxTuoi();
    DSNhanVien Tang();
};