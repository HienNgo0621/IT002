#pragma once
#include<iostream>
using namespace std;

class cThongTinThietBi{
    protected:
        string ma, ten, noisx;
    public:
        cThongTinThietBi(string ma = "", string t = "", string noi = "") : ma(ma), ten(t), noisx(noi) {}
        virtual void Nhap(){
            cout << "\t\t\t\tNhap ma: ";
            cin.ignore();
            getline(cin, ma);
            cout << "\t\t\t\tTen san pham: ";
            getline(cin, ten);
            cout << "\t\t\t\tNoi san xuat: ";
            getline(cin, noisx);
        }
        virtual void Xuat(ostream& out) = 0;
};
    
