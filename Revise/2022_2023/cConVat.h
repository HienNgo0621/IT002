#pragma once
#include<iostream>
#include<vector>
using namespace std;

class cConVat{
    protected:
        vector<unsigned int> giaidoan;
    public:
        cConVat(){}
        void Nhap() {
            unsigned int sogd;
            cout << "Nhap so giai doan: ";
            cin >> sogd;
            giaidoan.resize(sogd);
            for (int i = 0; i < sogd; i ++){
                cout << "Nhap giai doan " << i + 1 << " (ngay hoac tuan hoac nam): ";
                cin >> giaidoan[i];
            }
        }
        void Xuat() {
            cout << loai() << ": ";
            for (int i = 0; i < giaidoan.size(); i ++){
                cout << giaidoan[i] << "\t";
            }
        }
        virtual string loai() = 0;
        virtual bool iskhongTheoQuyLuat() = 0;
        unsigned int tongThoiGianPhatTrien() {
            unsigned int sum = 0;
            for (int i = 0; i < giaidoan.size(); i ++){
                sum += giaidoan[i];
            }
            return sum;
        }
        virtual ~cConVat() {}

};