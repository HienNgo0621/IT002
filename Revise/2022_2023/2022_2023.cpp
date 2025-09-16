#include<iostream>
#include<vector>
#include "listConVat.h"
using namespace std;

int main(){
    listConVat a;
    cout << "---Nhap danh sach con vat---\n";
    a.NhapDS();

    cout << "\n---Danh sach con vat khong tuan theo quy luat tu nhien---\n";
    a.khongTheoLuat();

    cout << "\n---Con muoi co thoi gian phat trien dai nhat---\n";
    listConVat muoi = a.MuoiThoiGianDaiNhat();
    muoi.XuatDS();
    system("pause");
    return 0;

}

