#pragma once
#include "cLanh.h"
#include<iostream>
using namespace std;

class cLanh2 : public cLanh{
    protected:
        unsigned int khangkhuan, khumui;
    public:
        cLanh2(unsigned int kk = 0, unsigned int km = 0) : khangkhuan(kk), khumui(km) {}
        void Nhap() override{
            cLanh ::Nhap();
            cout << "\t\t\t\tHo tro cong nghe khang khuan (1 - Co, 0 - Khong): "; cin >> khangkhuan;
            cout << "\t\t\t\tHo tro cong nghe khu mui (1 - Co, 0 - Khong): "; cin >> khumui;
        }
        string loai() {return "May lanh 2 chieu";};
        unsigned long donGia() {
            unsigned long sum = 0;
            if (inverter == 1) sum += 2500;
            else sum += 2000;
            if (khangkhuan == 1) sum += 500;
            if (khumui == 1) sum += 500;
            return sum;
        }
        void Xuat(ostream& out) override{
            cLanh ::Xuat(out);
            out << ((khangkhuan == 1) ? "Khang khuan " : "Khong khang khuan ") << ((khumui == 1) ? "Khu mui " : "Khong khu mui ");
        }
};
