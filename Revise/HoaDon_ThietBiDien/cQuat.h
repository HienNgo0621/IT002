#pragma once
#include "cThongTinThietBi.h"
#include<iostream>
using namespace std;

class cQuat : public cThongTinThietBi{
    protected:
        unsigned int dungTich;
    public:
        cQuat(unsigned int dt = 0) : dungTich(dt) {}
        virtual string loai() = 0;
        virtual unsigned long donGia() = 0;
        void Xuat(ostream& out) {
            out << "\t\tMay quat: " << ma << " " << loai() << " " << ten << " " << noisx << " " << donGia() << " " << dungTich << " ";
        }
};
    
