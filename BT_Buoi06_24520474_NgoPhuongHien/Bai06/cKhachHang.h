// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
using namespace std;

class cKhachHang
{
protected:
    string ten;
    unsigned int soluong;
    unsigned long dongia;

public:
    cKhachHang(string t = "", unsigned int sl = 0, unsigned long gia = 0) : ten(t), soluong(sl), dongia(gia) {}
    virtual float thue() { return 1.1f; }
    virtual unsigned long soTien() = 0;
    virtual void Nhap(istream &in)
    {
        in.ignore();
        getline(in, ten);
        in >> soluong;
        in >> dongia;
    }
    void Xuat(ostream &out)
    {
        out << ten << endl
            << "So tien phai tra: " << soTien() << endl;
    }
    virtual string loai() = 0;
    virtual ~cKhachHang() {}
};