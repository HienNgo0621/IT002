// Mã số sinh viên:24520474
// Họ và tên: Ngô Phương Hiền
// Ngày sinh:21/06/2006
// Lớp: IT002.P26.1

#pragma once
#include <iostream>
#include <string>

class SachGK
{
private:
    std ::string id, ten, nxb;
    int soluong;
    double gia;
    bool tinhtrang;

public:
    friend class DSSach;
    SachGK() {}
    SachGK(std ::string id, std ::string t, std::string nxb, int sl = 0, double gia = 0, bool tt = 1) : id(id), ten(t), nxb(nxb), soluong(sl), gia(gia), tinhtrang(tt) {}
    friend std ::istream &operator>>(std ::istream &in, SachGK &a);
    friend std ::ostream &operator<<(std ::ostream &out, const SachGK &a);
    double ThanhTien();
};
