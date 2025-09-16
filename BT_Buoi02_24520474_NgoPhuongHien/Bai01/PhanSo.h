#pragma once

class PhanSo
{
private:
    int iTuSo, iMauSo;
    void RutGon();

public:
    PhanSo(int t = 0, int m = 1);
    void Nhap();
    void Xuat();
    PhanSo Cong(const PhanSo &b);
    PhanSo Tru(const PhanSo &b);
    PhanSo Nhan(const PhanSo &b);
    PhanSo Chia(const PhanSo &b);
};