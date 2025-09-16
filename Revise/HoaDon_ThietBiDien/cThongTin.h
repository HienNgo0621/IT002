#pragma once
#include<iostream>
using namespace std;

class cThongTin{
    private:
        string ma, ten, diachi, sdt;
    public:
        cThongTin(string ma = "", string t = "", string dc = "", string sdt = "") : ma(ma), ten(t), diachi(dc), sdt(sdt) {}
        void NhapTT(){
            cout << "\tThong tin khach hang:\n";
            cout << "\t\tMa khach hang: "; 
            cin.ignore();
            getline(cin, ma);
            cout << "\t\tTen khach hang: ";
            getline(cin, ten);
            cout << "\t\tDia chi: ";
            getline(cin, diachi);
            cout << "\t\tSo dien thoai: "; 
            getline(cin, sdt);
        }

        void XuatTT(ostream& out){
            out << "\tThong tin khach hang: " << ma << " " << ten << " " << diachi << " " << sdt << endl;
        }
};