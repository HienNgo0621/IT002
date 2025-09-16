#pragma once
#include "SanPham.h"
#include<iostream>
using namespace std;

class CD : public SanPham{
    private:
        string nsx;
        string tenCaSi;
    public:
        CD(string sx = "", string ten = "") : nsx(sx), tenCaSi(ten) {}
        string loai () {return "CD";};
        void Nhap() override{
            SanPham ::Nhap();
            cout << "Nhap ten ca si: "; getline(cin >> ws, tenCaSi);
            cout << "Nhap don vi san xuat: "; getline(cin >> ws, nsx);
        }
        void Xuat() override{
            SanPham ::Xuat();
            cout << "Ca si: " << tenCaSi << " Don vi san xuat: " << nsx << endl;
        }
};