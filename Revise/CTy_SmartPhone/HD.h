#pragma once
#include "cManHinh.h"
#include<iostream>
using namespace std;

class HD : public cManHinh{
    public:
        void Xuat(ostream& out){
            cManHinh::Xuat(out);
            out << "\n";
        }
        string phanGiai() const override {return "HD";}
        unsigned long giaNhap() override {return 200;}
};