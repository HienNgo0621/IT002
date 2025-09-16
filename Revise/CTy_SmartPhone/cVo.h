#pragma once
#include<iostream>
using namespace std;

class cVo{
    protected:
        string ma;
    public:
        cVo(string m = "") : ma(m) {}
        virtual void Nhap(){
            cout << "Nhap ma vo: "; cin >> ma;
        }
        virtual void Xuat(ostream& out){
            out << "Vo smartphone: " << ma << " " << loai();
        }
        virtual string hang() = 0;
        virtual string loai() = 0;
        virtual unsigned long giaNhap() = 0;
        virtual ~cVo() {}
};