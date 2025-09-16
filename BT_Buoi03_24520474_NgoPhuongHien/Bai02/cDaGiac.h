#pragma once
#include<string>
#include<vector>
#include "Diem.h"

class cDaGiac {
    private:
        std ::vector<Diem> dg;
        int n;
    public:
        cDaGiac() : n(0) {}
        cDaGiac(const std ::vector<Diem> &dg);
        void NhapDG();
        void XuatDG() const;
        std ::string KiemTraDG();
        float ChuVi();
        float DienTich();
        cDaGiac TinhTienDG(float, float);
        cDaGiac QuayDG(float);
        cDaGiac PhongToDG(float);
        cDaGiac ThuNhoDG(float);
};