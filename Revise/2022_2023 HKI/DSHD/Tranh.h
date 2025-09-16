#pragma once
#include "SanPham.h"
#include<iostream>
using namespace std;

class Tranh : public SanPham{
    private:
        float rong, cao;
        string tenHoaSi;
    public:
        Tranh(float r = 0, float c = 0, string ten = "") : rong(r), cao(c), tenHoaSi(ten) {}
        string loai () {return "Tranh anh";};
        void Nhap() override{
            SanPham ::Nhap();
            cout << "Nhap chieu rong: "; cin >> rong;
            cout << "Nhap chieu cao: "; cin >> cao;
            cout << "Nhap ten hoa si: "; getline(cin >> ws, tenHoaSi);
        }
        void Xuat() override{
            SanPham ::Xuat();
            cout << "Rong: " << rong << " Cao: " << cao << " Hoa si: " << tenHoaSi << endl;
        }
};