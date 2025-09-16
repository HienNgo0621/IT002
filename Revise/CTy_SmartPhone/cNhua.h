#pragma once
#include "cVo.h"
#include<iostream>
using namespace std;

class cNhua : public cVo{
    private:
        unsigned int mausac;
    public:
        cNhua(unsigned int mau = 1) : mausac(mau) {}
        void Nhap() override{
            cVo ::Nhap();
            cout << "\t\tMau vo (1 - do, 2 - den, 3 - xanh): "; cin >> mausac;
        }
        string hang() override {return "White";}
        string loai() override{return "Loai Nhua";}
        unsigned long giaNhap() override {return 200;}
        void Xuat(ostream& out) override {
            cVo ::Xuat(out);
            if (mausac == 1){
                out << "  Do " << giaNhap() << endl;
            } else if (mausac == 2) {
                out << "  Den " << giaNhap() << endl;
            } else {
                out << "  Xanh " << giaNhap() << endl;
            }
        }
};