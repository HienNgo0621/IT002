#pragma once
#include "cDienLuc.h"
#include<iostream>
using namespace  std;

class cDoanhNghiep : public cDienLuc{
    private:
        string loai;
    public:
        void Nhap() override{
            cDienLuc:: Nhap();
            cout << "Loai doanh nghiep (nha hang khach san, cong ty tu nhan, cong ty nha nuoc): ";
            cin.ignore();
            getline(cin, loai);
        }
        void Xuat() override{
            cDienLuc::Xuat();
            cout << loai << endl;
        }
        unsigned long tienDien() {
            return soKW() * 3600;
        }
        unsigned long tienUuDai() {
            if (loai == "cong ty nha nuoc") return tienDien() * 0.05;
            else return 0;
        }
        string loaikh(){return "doanh nghiep";}
};