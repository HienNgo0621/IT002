#pragma once
#include <string>
#include <iostream>

class cCandidate
{
private:
    std ::string id, name, birth;
    float math, lite, eng;

public:
    friend class cListCandidate;
    cCandidate() {}
    cCandidate(std ::string id, std ::string n, std ::string b, float m = 0, float l = 0, float e = 0) : id(id), name(n), birth(b), math(m), lite(l), eng(e) {}
    friend std ::istream &operator>>(std ::istream &in, cCandidate &a);
    friend std ::ostream &operator<<(std ::ostream &out, const cCandidate &a);
    float TongDiem();
};