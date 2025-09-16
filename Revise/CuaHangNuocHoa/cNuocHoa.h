#pragma once
#include<iostream>
using namespace std;

class cNuocHoa{
    protected:
        string ms;
        unsigned int dungTich;
    public:
        cNuocHoa(string m = "", unsigned int dt = 0) : ms(m), dungTich(dt) {}
        void Nhap(){
            cout << "\t\tMa so: "; cin >> ms;
            cout << "\t\tNhap dung tich: "; cin >> dungTich;
        }
        virtual void Xuat(ostream &out){
            out << "\tNuoc hoa: " << ms << " " <<  loai() << " " << tieuChuan() << " " << dungTich << " " << donGia() << endl;
        }
        virtual string loai() = 0;
        virtual unsigned long donGia() = 0;
        virtual string tieuChuan() = 0;
        virtual ~cNuocHoa(){}
};