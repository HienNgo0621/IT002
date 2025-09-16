// Mã số sinh viên:24520474
// Họ và tên: Ngô Phương Hiền
// Ngày sinh:21/06/2006
// Lớp: IT002.P26.1

#pragma once
#include <iostream>

class SVCD
{
private:
    std ::string id, ten, diachi;
    int tinchi;
    float dtb, dtn;

public:
    friend class DSSV;
    SVCD() {}
    SVCD(std ::string id, std ::string t, std ::string dc, int tc = 0, float dtb = 0, float dtn = 0) : id(id), ten(t), diachi(dc), tinchi(tc), dtb(dtb), dtn(dtn) {}
    friend std ::istream &operator>>(std ::istream &in, SVCD &a);
    friend std ::ostream &operator<<(std ::ostream &out, const SVCD &a);
    bool DuDKTN();
};