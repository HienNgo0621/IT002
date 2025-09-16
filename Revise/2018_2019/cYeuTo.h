#pragma once
#include<iostream>
using namespace std;

class cYeuTo{
    protected:
        unsigned int chiso;
    public:
        cYeuTo(unsigned int cs = 0) : chiso(cs) {}
        void Nhap(){
            cout << "Nhap chi so: "; cin >> chiso;
        }
        void Xuat(){
            cout << chiso << "\t" << loai() << " " << thongTin() << endl;
        }
        unsigned int getChiSo(){return chiso;}
        virtual string loai() = 0;
        virtual string thongTin() = 0;
};