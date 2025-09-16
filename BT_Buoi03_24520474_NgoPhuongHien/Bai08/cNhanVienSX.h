#pragma once
#include <string>
#include "Date.h"

class cNhanVienSX
{
private:
    std ::string id;
    std ::string name;
    Date birth;
    int product;
    long long valpro;

public:
    friend class DSNhanVien;
    cNhanVienSX() {}
    cNhanVienSX(std ::string id, std ::string n, int p = 0, long long v = 0) : id(id), name(n), product(p), valpro(v) {}
    friend std ::istream &operator>>(std ::istream &in, cNhanVienSX &a);
    friend std ::ostream &operator<<(std ::ostream &out, cNhanVienSX a);
    std ::string getId();
    std ::string getName();
    int getProDuct();
    long long getVal();

    void setId(std ::string);
    void setName(std ::string);
    void setProDuct(int);
    void setVal(long long);

    long long Salary();
};