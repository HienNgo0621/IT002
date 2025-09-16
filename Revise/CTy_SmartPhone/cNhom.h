#pragma once
#include "cVo.h"
#include<iostream>
using namespace std;

class cNhom : public cVo{
    private:
        unsigned int mausac;
    public:
        cNhom(unsigned int mau = 1) : mausac(mau) {}
        void Nhap() override{
            cVo ::Nhap();
            cout << "\t\tMau vo (1 - do, 2 - den): "; cin >> mausac;
        }
        string hang() override{return "Black";}
        string loai() override{return "Loai Nhom";}
        unsigned long giaNhap() override {return 400;}
        void Xuat(ostream& out) override {
            cVo ::Xuat(out);
            if (mausac == 1){
                out << "  Do " << giaNhap() << endl;
            } else {
                out << "  Den " << giaNhap() << endl;
            }
        }
};