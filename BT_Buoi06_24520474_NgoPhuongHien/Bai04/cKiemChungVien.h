// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include<iostream>
#include "cNhanVien.h"
using namespace std;

class cKiemChungVien : public cNhanVien{
    private:
        unsigned int soloi;
    public:
        cKiemChungVien(unsigned int loi = 0) : soloi(loi) {}
        void Nhap() override{
            cNhanVien ::Nhap();
            cout << "Nhap so loi phat hien duoc: "; cin >> soloi;
        }

        void Xuat() override{
            cNhanVien ::Xuat();
            cout << soloi << " loi" << endl;
        }

        unsigned long tinhLuong(){
            return luongcb + soloi * 50000;
        }

        string loai() override{return "Kiem chung vien";}
        ~cKiemChungVien() {}
};