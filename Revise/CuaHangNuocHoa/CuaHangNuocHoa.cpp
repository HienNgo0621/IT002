#include<iostream>
#include "cCuaHang.h"
#include<vector>
#include<fstream>
using namespace std;

int main (){
    vector<cCuaHang> a;
    unsigned int n;
    cout << "Nhap so luong don hang: "; cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i ++){
        cout << "Nhap thong tin don hang " << i + 1 << ":\n";
        a[i].NhapSP();
    }
    ofstream fout("danh_sach_don_hang.txt", ios::app);
    for (int i = 0; i < n; i ++){
        fout << "---Thong tin don hang thu " << i + 1 << "---\n";
        fout << a[i];
    }
    fout.close();
    system("pause");
    return 0;
}