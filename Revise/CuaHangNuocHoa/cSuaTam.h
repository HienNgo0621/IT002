#pragma once
#include<iostream>
using namespace std;

class cSuaTam{
    protected:
        string ms;
        unsigned int dungTich;
        string ten;
    public:
        cSuaTam(string m = "", unsigned int dt = 0, string ten = "") : ms(m), dungTich(dt), ten(ten) {}
        void Nhap(){
            cout << "\t\tMa so cua sua tam: "; cin >> ms;
            cout << "\t\tNhap ten sua tam: "; 
            cin.ignore();
            getline(cin, ten);
            cout << "\t\tNhap dung tich: "; cin >> dungTich;
        }
        virtual void Xuat(ostream &out){
            out << "\tSua tam: " << ms << " " <<  loai() << " " << dungTich << " " << donGia() << endl;
        }
        virtual string loai() = 0;
        virtual unsigned long donGia() = 0;
         virtual ~cSuaTam() {}
};