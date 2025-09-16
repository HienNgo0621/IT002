#pragma once
#include<iostream>
using namespace std;

class cDauGoi{
    protected:
        string ms;
        unsigned int dungTich;
    public:
        cDauGoi(string m = "", unsigned int dt = 0) : ms(m), dungTich(dt) {}
        virtual void Nhap(){
            cout << "\t\tMa so cua dau goi: "; cin >> ms;
            cout << "\t\tNhap dung tich: "; cin >> dungTich;
        }
        virtual void Xuat(ostream &out){
            out << "\tDau goi: " << ms << " " << loai() << " " << tieuChuan() << (tieuChuan() == "" ? "" : " ") << dungTich << " " << donGia() << endl;
        }
        virtual string loai() = 0;
        virtual unsigned long donGia() = 0;
        virtual string tieuChuan() = 0;
        virtual ~cDauGoi() {}
};