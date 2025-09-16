#pragma once
#include "cThongTinThietBi.h"
#include<iostream>
using namespace std;

class cLanh : public cThongTinThietBi{
    protected:
        unsigned int inverter;
    public:
        cLanh(unsigned int ivt = 0) : inverter(ivt) {}
        virtual void Nhap() override{
            cThongTinThietBi ::Nhap();
            cout << "\t\t\t\tHo tro cong nghe inverter (1 - Co, 0 - Khong): "; cin >> inverter;
        }
        virtual string loai() = 0;
        virtual unsigned long donGia() = 0;
        virtual void Xuat(ostream& out) {
            out << "\t\tMay lanh: " << ma << " " << loai() << " " << ten << " " << noisx << " " << donGia() << " " << ((inverter == 1) ? "Co Inverter" : "Khong Inverter") << " ";
        }
};
