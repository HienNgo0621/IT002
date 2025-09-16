#pragma once
#include "cGoi.h"
#include "cGoiRoManTic.h"
#include "cGoiFreshAir.h"
#include "cThongTin.h"
#include<iostream>
using namespace std;

class cCuaHang{
    private:
        cThongTin tt;
        cGoi* goi;
        unsigned int loaigoi;
        string ma, ngay;
    public:
        cCuaHang(){
            goi = NULL;
        }
        ~cCuaHang() { 
            delete goi;
        }
        void NhapSP(){
            cout << "\tMa don hang: "; 
            cin.ignore();
            getline(cin, ma);
            cout << "\tNgay lap don hang: "; getline(cin, ngay);
            cout << "\tThong tin khach hang:\n";
            tt.NhapTT();
            cout << "\tNhap thong so goi san pham\n";
            cout << "\tNhom goi san pham (1 - Romantic, 2 - Fresh-Air): "; cin >> loaigoi;
            if (loaigoi == 1) goi = new cGoiRoManTic;
            else goi = new cGoiFreshAir;
            goi->Nhap();
        }
        friend ostream& operator << (ostream& out, const cCuaHang &a){
            out << "Don hang: " << a.ma << " " << a.ngay << " " << a.goi->giaTri() << endl;
            a.tt.XuatTT(out);
            a.goi->Xuat(out);
            return out;
        }
};