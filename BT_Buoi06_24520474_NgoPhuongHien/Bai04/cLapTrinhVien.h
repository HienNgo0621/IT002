// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include<iostream>
#include "cNhanVien.h"
using namespace std;

class cLapTrinhVien : public cNhanVien{
    private:
        unsigned int overtime;
    public:
        cLapTrinhVien(unsigned int ovt = 0) : overtime(ovt) {}
        void Nhap() override{
            cNhanVien ::Nhap();
            cout << "Nhap so gio overtime: "; cin >> overtime;
        }

        void Xuat() override{
            cNhanVien ::Xuat();
            cout << overtime << " gio" << endl;
        }

        unsigned long tinhLuong(){
            return luongcb + overtime * 200000;
        }

        string loai() override{return "Lap trinh vien";}
        ~cLapTrinhVien() {}
};