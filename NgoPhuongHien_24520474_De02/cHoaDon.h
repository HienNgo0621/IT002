#pragma once
#include "cHo.h"
#include "cDoanhNghiep.h"
#include<iostream>
#include<limits>
#include<vector>
using namespace  std;

class cHoaDon {
    private:
        vector<cDienLuc*> dien;
        unsigned int loai;
    public:
        cHoaDon(){}
        cHoaDon(const vector<cDienLuc*> &d){
            dien = d;
        }
        ~cHoaDon(){
            for (int i = 0; i < dien.size();  i++){
                delete dien[i];
            }
            dien.clear();
        }
        void NhapHD(){
            cout << "Nhap so luong khach hang: "; 
            unsigned int n;
            cin >> n;
            dien.resize(n);
            for (int i = 0; i < n; i ++){
            cout << "+ Nhap thong tin khach hang:\n";
            cout << "Loai khach hang (1 - doanh nghiep, 2 - ho gia dinh): "; cin >> loai;
            if (loai == 1) {
                dien[i] = new cDoanhNghiep;
                dien[i]->Nhap();
            }
            else{
                dien[i] = new cHo;
                dien[i]->Nhap();
            }
        }
        }
        void XuatHD(){
            for (int i = 0;  i < dien.size(); i ++){
                dien[i]->Xuat();
            }
        }

        unsigned long tongTienThanhToan(){
            unsigned long sum = 0;
            for (int i = 0; i < dien.size(); i ++){
                if (dien[i]->loaikh() == "ho" && dien[i]->getThang() == 4 && dien[i]->getNam() == 2025) sum += dien[i]->tienThanhToan();
            }
            return sum;
        }

        cHoaDon hoNhieuDienNhat(){
            vector<cDienLuc*> max;
            unsigned int maxKW = numeric_limits<unsigned int> :: min();
            for (int i = 0; i < dien.size(); i ++){
                if (dien[i]->loaikh() == "ho" && maxKW < dien[i]->soKW()) maxKW = dien[i]->soKW();
            }

            for (int i = 0; i < dien.size(); i ++){
                if (dien[i]->loaikh() == "ho" && maxKW == dien[i]->soKW()) max.push_back(dien[i]);
            }
            return cHoaDon(max);
        }
};