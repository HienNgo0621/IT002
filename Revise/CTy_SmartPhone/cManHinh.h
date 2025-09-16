#pragma once
#include<string>
#include<iostream>
using namespace std;

class cManHinh{
    protected:
        string ma;
        string hang;
    public:
        cManHinh(string m = "", string h = "") : ma(m), hang(h) {}
        virtual void Nhap() {
            cout << "Nhap ma man hinh: "; cin >> ma;
            cout << "\t\tHang san xuat: "; 
            cin.ignore();
            getline(cin, hang);    
        }
        virtual void Xuat(ostream& out) {
            out << "Man hinh: " << ma << " " << hang << " " << phanGiai() << " " << giaNhap();
        }
        virtual string phanGiai() const = 0;
        virtual unsigned long giaNhap() = 0;
        virtual ~cManHinh(){}
};