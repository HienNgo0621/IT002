#pragma once
#include <string>
#include "Date.h"

class cNhanVienVP
{
private:
    std ::string id;
    std ::string name;
    Date birth;
    long long salary;

public:
    friend class DSNhanVien;
    cNhanVienVP() {}
    cNhanVienVP(std ::string id, std ::string n, long long s = 0) : id(id), name(n), salary(s) {}
    friend std ::istream &operator>>(std ::istream &in, cNhanVienVP &a);
    friend std ::ostream &operator<<(std ::ostream &out, const cNhanVienVP &a);
    std ::string getId();
    std ::string getName();
    long long getSalary();

    void setId(std ::string);
    void setName(std ::string);
    void setSalary(long long);
};