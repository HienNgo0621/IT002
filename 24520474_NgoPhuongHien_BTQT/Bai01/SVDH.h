// Mã số sinh viên:24520474
// Họ và tên: Ngô Phương Hiền
// Ngày sinh:21/06/2006
// Lớp: IT002.P26.1

#pragma once
#include <iostream>

class SVDH
{
private:
    std ::string id, ten, diachi, tenlv;
    int tinchi;
    float dtb, dlv;

public:
    friend class DSSV;
    SVDH() {}
    SVDH(std ::string id, std ::string t, std ::string dc, std ::string lv, int tc = 0, float dtb = 0, float dlv = 0) : id(id), ten(t), diachi(dc), tenlv(lv), tinchi(tc), dtb(dtb), dlv(dlv) {}
    friend std ::istream &operator>>(std ::istream &in, SVDH &a);
    friend std ::ostream &operator<<(std ::ostream &out, const SVDH &a);
    bool DuDKTN();
};