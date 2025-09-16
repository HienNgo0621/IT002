#pragma once

class Diem
{
private:
    float iHoanhDo, iTungDo;

public:
    Diem(float h = 0, float t = 0);
    float getHoanh(); // lay
    float getTung();
    void setHoanh(float); // thay doi
    void setTung(float);
    void TinhTien(float a, float b);
    void Nhap();
    void Xuat() const;
};