#pragma once
#include <string>
#include "cNhanVienVP.h"
#include <vector>

class DSNhanVien
{
private:
    std ::vector<cNhanVienVP> ds;
    int n;

public:
    DSNhanVien() : n(0) {}
    DSNhanVien(const std ::vector<cNhanVienVP> &a);
    void Nhap(int n);
    void Xuat();
    DSNhanVien maxLuong();
    long long TongLuong();
    DSNhanVien maxTuoi();
    DSNhanVien Tang();
};