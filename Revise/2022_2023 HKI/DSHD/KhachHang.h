#pragma once
#include "SanPham.h"
#include "Tranh.h"
#include "CD.h"
#include<iostream>
using namespace std;

class KhachHang {
    private:
        string maso;
        string ten;
        string sdt;
    public:
        KhachHang(string ms = "", string t = "", string so = "") : maso(ms), ten(t), sdt(so) {}
        void NhapKH(){
            cout << "Nhap ma khach hang: "; cin >> maso;
            cout << "Nhap ten khach hang: "; getline(cin >> ws, ten);
            cout << "Nhap so dien thoai: "; cin >> sdt;
        }
        void XuatKH(){
            cout << maso << " " << ten << " " << sdt << endl;
        }
};