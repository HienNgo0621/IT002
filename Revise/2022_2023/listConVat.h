#pragma once
#include<iostream>
#include<vector>
#include "cConVat.h"
#include "cMuoi.h"
#include "cEch.h"
#include "cBuom.h"
using namespace std;

class listConVat{
    private:
        vector<cConVat*> vat;
    public:
        listConVat() {}
        listConVat(const vector<cConVat*> &cv) {
            vat = cv;
        }

        void NhapDS(){
            cout << "Nhap so luong con vat: "; 
            unsigned int soluong; 
            cin >> soluong;
            vat.resize(soluong);
            for (int i = 0; i < soluong; i ++){
                unsigned int loaivat;
                cout << "+ Chon loai con vat (1 - muoi, 2 - ech, 3 - buom): "; cin >> loaivat;
                if (loaivat == 1) vat[i] = new cMuoi;
                else if (loaivat == 2) vat[i] = new cEch;
                else vat[i] = new cBuom;
                vat[i]->Nhap();
            }
        }

        void XuatDS(){
            for (int i = 0; i < vat.size(); i ++){
                cout << i + 1 << "\t";
                vat[i]->Xuat();
                cout << endl;
            }
        }

        void khongTheoLuat(){
            for (int i = 0; i < vat.size(); i ++){
                if (vat[i]->iskhongTheoQuyLuat()) cout << i + 1 << " ";
            }
        }

        listConVat MuoiThoiGianDaiNhat(){
            vector<cConVat*> muoi;
            unsigned int maxDongDoi = 0;
            for (int i = 0; i < vat.size(); i ++){
                unsigned int tongtg = vat[i]->tongThoiGianPhatTrien();
                if (vat[i]->loai() == "Muoi" && maxDongDoi < tongtg) maxDongDoi = tongtg; 
            }

            for (int i = 0; i < vat.size(); i ++){
                if (vat[i]->loai() == "Muoi" && maxDongDoi == vat[i]->tongThoiGianPhatTrien()) muoi.push_back(vat[i]); 
            }
            return listConVat(muoi);
        }
};