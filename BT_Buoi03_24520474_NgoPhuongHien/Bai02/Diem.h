#pragma once
#include<vector>

class Diem {
    private:
        float iHoanhDo, iTungDo;
        friend class cDaGiac;
    public:
        Diem(float h = 0, float t = 0) : iHoanhDo(h), iTungDo(t) {}
        void Nhap();
        void Xuat() const;
        float KhoangCach2Diem(const Diem &a);
        Diem TinhTien(float a, float b);
        Diem Quay(float goc);
        Diem DiChuyenkLan(float k);
        float getHoanh(){
            return iHoanhDo;
        };
        float getTung(){
            return iTungDo;
        };
        // void setHoanh(float);
        // void setTung(float);
};