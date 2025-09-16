#pragma once
#include "cManHinh.h"
#include<iostream>
using namespace std;

class FULLHDChonLua : public cManHinh{
    private:
        unsigned int chongLoa;
    public:
        FULLHDChonLua(unsigned int cl = 0) : chongLoa(cl) {}
        void Nhap() override{
            cManHinh ::Nhap();
            cout << "\t\tChong loa (1 - Co, 0 - Khong): "; 
            cin >> chongLoa;
        }
        unsigned long giaNhap() override {
            if (chongLoa == 0) return 300;
            else return 500;
        }
        string phanGiai() const override {return "FullHD";}
        void Xuat(ostream& out) override{
            cManHinh::Xuat(out);
            if (chongLoa == 0) {
                out << " Khong chong loa" << endl;
            } else {
                out << " Co chong loa" << endl;
            }
        }
};