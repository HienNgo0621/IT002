#pragma once
#include<iostream>
using namespace std;

class SanPham{
    protected:
        string maso;
        string tieude;
        double gia;
    public:
        SanPham(string ms = "", string td = "", double gia = 0) : maso(ms), tieude(td), gia(gia) {}
        virtual string loai() = 0;
        virtual void Nhap(){
            cout << "Nhap ma so: "; 
            getline(cin >> ws, maso);
            cout << "Nhap tieu de: ";
            getline(cin >> ws, tieude);
            cout << "Nhap gia ban: ";
            cin >> gia;
        }
        virtual void Xuat(){
            cout << loai() << ": " << maso << " " << tieude << " " << gia << " ";
        }
        double getGia() {return gia;}
};