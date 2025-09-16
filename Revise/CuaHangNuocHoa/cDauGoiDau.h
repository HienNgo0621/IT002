#pragma once
#include "cDauGoi.h"
#include<iostream>
using namespace std;

class cDauGoiDau : public cDauGoi{
    private:
        unsigned int tc;
    public:
        void Nhap(){
            cDauGoi ::Nhap();
            cout << "\t\tDat tieu chuan (1 - tieu chuan 1, 2 - tieu chuan 2): "; cin >> tc;
        }
        string loai() {return "Da dau";};
        unsigned long donGia(){
            if (tc == 1) return dungTich * 30;
            else return dungTich * 40;
        }
        string tieuChuan() {
            if (tc == 1) return "Tieu chuan kiem dinh 1";
            else return "Tieu chuan kiem dinh 2";
        }
};