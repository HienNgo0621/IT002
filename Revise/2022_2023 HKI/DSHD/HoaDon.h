#pragma once
#include "SanPham.h"
#include "Tranh.h"
#include "CD.h"
#include "KhachHang.h"
#include<iostream>
#include<vector>
using namespace std;

class HoaDon {
    private:
        string maso;
        KhachHang kh;
        string ngay;
        vector<SanPham*> sp;
    public:
        HoaDon(){}
        void NhapHD(){
            cout << "Nhap thong tin hoa don: \n";
            cout << "Nhap ma hoa don: "; cin >> maso;
            cout << "Nhap thong tin khach hang: \n";
            kh.NhapKH();
            cout << "Nhap ngay nhap hoa don: "; cin >> ngay;
            cout << "Nhap so luong san pham: "; 
            int n; cin >> n;
            sp.resize(n);
            for (int i = 0; i < n; i ++){
                int x;
                cout << "Nhap loai san pham (1 - tranh, 2 - cd): "; cin >> x;
                if (x == 1) sp[i] = new Tranh;
                else sp[i] = new CD;
                sp[i]->Nhap();
            }
        }
        void XuatHD(){
            cout << "Ma hoa don: " << maso << endl;
            cout << "Thong tin khach hang: ";
            kh.XuatKH();
            cout << "Ngay nhap hoa don: " << ngay << endl;
            cout << "Thong tin san pham: \n";
            for (int i = 0; i < sp.size(); i ++){
                sp[i]->Xuat();
            }
            cout << "Tong gia: " << tongGia() << endl;
        }
        double tongGia(){
            double sum = 0;
            for (int i = 0; i < sp.size(); i ++){
                sum += sp[i]->getGia();
            }
            return sum;
        }
};