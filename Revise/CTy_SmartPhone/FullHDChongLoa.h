#pragma once
#include "cManHinh.h"
#include<iostream>
using namespace std;

class FullHDChongLoa : public cManHinh{
    public:
        string phanGiai() const override {return "FullHD";}
        unsigned long giaNhap() override {
            return 500;
        }
        void Xuat(ostream& out) override{
            cManHinh::Xuat(out);
            out << " Co chong loa" << endl;
        }
};