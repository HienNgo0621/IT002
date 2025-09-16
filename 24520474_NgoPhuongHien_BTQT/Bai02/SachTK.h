// Mã số sinh viên:24520474
// Họ và tên: Ngô Phương Hiền
// Ngày sinh:21/06/2006
// Lớp: IT002.P26.1

#pragma once
#include <iostream>
#include <string>

class SachTK
{
private:
    std ::string id, ten, nxb;
    int soluong;
    double gia, thue;

public:
    friend class DSSach;
    SachTK() {}
    SachTK(std ::string id, std ::string t, std::string nxb, int sl = 0, double gia = 0, double thue = 0) : id(id), ten(t), nxb(nxb), soluong(sl), gia(gia), thue(thue) {}
    friend std ::istream &operator>>(std ::istream &in, SachTK &a);
    friend std ::ostream &operator<<(std ::ostream &out, const SachTK &a);
    double ThanhTien();
};
