#pragma once
#include "cHoaDon.h"
#include "cThongTin.h"
#include<vector>
#include<iostream>
using namespace std;

class cListHoaDon{
    private:
        string ma, ngay;
        cThongTin tt;
        vector<cHoaDon> hd;

    public:
        cListHoaDon(){}
        void NhapDS(){
            cout << "\tMa hoa don: "; 
            cin.ignore();
            getline(cin, ma);
            cout << "\tNgay lap hoa don: "; 
            getline(cin, ngay);
            tt.NhapTT();
            unsigned int n;
            cout << "\tNhap danh sach cac chi tiet trong hoa don:\n";
            cout << "\t\tSo luong cac danh sach chi tiet trong hoa don: "; cin >> n;
            hd.resize(n);
            for (int i = 0; i < n; i ++){
            cout << "\t\tNhap chi tiet hoa don thu " << i + 1 << endl;
                hd[i].NhapHD();
            }
        }

        unsigned long tongGia(){
            unsigned long sum = 0;
            for (int i = 0; i < hd.size(); i ++){
                sum += hd[i].tongGia();
            }
            return sum;
        }

        friend ostream& operator << (ostream& out, cListHoaDon a){
            out << "Hoa don: " << a.ma << " " << a.ngay << " " << a.tongGia() << endl;
            a.tt.XuatTT(out);
            for (int i = 0; i < a.hd.size(); i ++){
                a.hd[i].XuatHD(out);
            }
            return out;
        }
};