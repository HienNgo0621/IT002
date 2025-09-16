#pragma once
#include<iostream>
using namespace std;

class cThongTin{
    private:
        string ma, ten, diachi, sdt;
    public:
        cThongTin(string m = "", string t = "", string dc = "", string sdt = "") : ma(m), ten(t), diachi(dc), sdt(sdt) {}
        void NhapTT(){
            cout << "\t\tMa khach hang: "; 
            getline(cin, ma);
            cout << "\t\tTen khach hang: "; 
            getline(cin, ten);
            cout << "\t\tDia chi: ";
            getline(cin, diachi);
            cout << "\t\tSo dien thoai: ";
            getline(cin, sdt);
        }
        void XuatTT(ostream &out) const{
            out << "\tThong tin khach hang: " << ma << " " << ten << " " << diachi << " " << sdt << endl;
        }
};