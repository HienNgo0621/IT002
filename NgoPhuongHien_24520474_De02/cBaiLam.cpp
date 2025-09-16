#include "cHoaDon.h"
#include<iostream>
#include<vector>
using namespace std;

int main(){
    cHoaDon hd;
    hd.NhapHD();
    cout << "-------------------------------\n";
    hd.XuatHD();
    cout << "\nTong so tien thanh toan cac ho da su dung dien trong thang qua: " << hd.tongTienThanhToan() << endl;
    cout << "\nHo gia dinh su dung dien nhieu nhat:\n";
    cHoaDon nhieuKM = hd.hoNhieuDienNhat();
    nhieuKM.XuatHD();
    system("pause");
    return 0;
}