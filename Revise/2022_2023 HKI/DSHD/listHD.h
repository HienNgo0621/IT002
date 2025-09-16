#pragma once
#include "SanPham.h"
#include "Tranh.h"
#include "CD.h"
#include "KhachHang.h"
#include "HoaDon.h"
#include<iostream>
#include<vector>
using namespace std;

class listHD{
    private:
        vector<HoaDon> hd;
    public:
        listHD(){}
        listHD(const vector<HoaDon> &h){
            hd = h;
        }
        void NhapDS(){
            cout << "Nhap so luong danh sach: "; 
            int n; cin >> n;
            hd.resize(n);
            for (int i = 0; i < n; i ++){
                hd[i].NhapHD();
                cout << "---\n";
            }
        }
        void XuatDS(){
            for (int i = 0; i < hd.size(); i ++){
                hd[i].XuatHD();
            }
        }
        double tongThuNhap(){
            double sum = 0;
            for (int i = 0; i < hd.size(); i ++){
                sum += hd[i].tongGia();
            }
            return sum;
        }
        listHD muaMax(){
            vector<HoaDon> maxMua;
            double max = 0;
            for (int i = 0; i < hd.size(); i ++){
                if (max < hd[i].tongGia()) max = hd[i].tongGia();
            }
            for (int i = 0; i < hd.size(); i ++){
                if (max == hd[i].tongGia()) maxMua.push_back(hd[i]);
            }
            return listHD(maxMua);
        }
};