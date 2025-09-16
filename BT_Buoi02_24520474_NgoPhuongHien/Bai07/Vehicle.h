#pragma once
#include <string>

class Vehicle
{
private:
    std::string chuXe, loaiXe;
    long long giaXe;
    short dungtich;

public:
    Vehicle();
    Vehicle(std ::string, std ::string, long long, short);
    long long TienThue();
    void XuatKeKhai();
};