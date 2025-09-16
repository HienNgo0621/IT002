#pragma once
#include<iostream>
using namespace std;

class CPU{
    protected:
        string ma; 
    public:
        CPU(string m = "") : ma(m) {}
        void Nhap() {
            cout << "Nhap ma CPU: ";
            cin >> ma;
        }
        virtual void Xuat(ostream& out){
            out << "CPU: " << ma << " " << loai() << " " << hang() << " core " << soCore() << " " << xungNhip() << " " << giaNhap() << endl;;
        }
        virtual string loai() const = 0;
        virtual unsigned char soCore() = 0;
        virtual float xungNhip() = 0;
        virtual unsigned long giaNhap() = 0;
        virtual string hang() const = 0;
        virtual ~CPU(){}
};