#pragma once
#include "cDienLuc.h"
#include<iostream>
using namespace  std;

class cHo : public cDienLuc{
    private:
        unsigned int loai;
    public:
        void Nhap() override{
            cDienLuc:: Nhap();
            cout << "Ho ngheo (1 - Co, 2 - Khong): ";
            cin >> loai;
        }
        void Xuat() override{
            cDienLuc::Xuat();
            if (loai == 1) cout << "Ho ngheo" << endl;
            else cout << "Khong ho ngheo" << endl;
        }
        unsigned long tienDien() {
            unsigned long sum = 0;
            if (soKW() >= 0 && soKW() <= 50) return soKW() * 2500;
            else if (soKW() >= 51 && soKW() <= 100){
                sum += 50 * 2500 + (soKW() - 50) * 3000;
                return sum;
            }
            else {
                sum += 50 * 2500 + 50 * 3000 + (soKW() - 100) * 3500;
                return sum;
            }
        }
        unsigned long tienUuDai(){
            if (loai == 1) return tienDien() * 0.1;
            else return 0;
        }
        string loaikh()override {return "ho";}
};