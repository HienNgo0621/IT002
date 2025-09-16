#pragma once
#include "Diem.h"
#include <string>

class cTamGiac
{
private:
    Diem A, B, C;

public:
    cTamGiac(Diem a, Diem b, Diem c) : A(a), B(b), C(c) {}
    void NhapTG();
    void XuatTG() const;
    std ::string KiemTraTG();
    float ChuVi();
    float DienTich();
    cTamGiac TinhTienTG(float, float);
    cTamGiac QuayTG(float);
    cTamGiac PhongToTG(float);
    cTamGiac ThuNhoTG(float);
};