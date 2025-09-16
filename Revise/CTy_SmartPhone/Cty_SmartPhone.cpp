#include<iostream>
#include "cSmartPhone.h"
#include<vector>
#include<fstream>
using namespace std;

int main(){
    vector<cSmartPhone> a;
    int n; 
    cout << "Nhap so luong smartphone: "; cin >> n;
    cout << "---------------------------------------------\n";
    a.resize(n);
    for (int i = 0; i < n; i ++){
        cout << "+ Nhap thong so smartphone thu " << i + 1;
        cout << "\n\t";
        a[i].NhapSP();
    }

    cout << "----------------------------------------------\n";
    
    ofstream fout("danh_sach_san_pham.txt", ios::app);
    for (int i = 0; i < n; i ++){
        fout << "+ Thong so smartphone thu " << i + 1;
        fout << "\n" << a[i];
    }
    fout.close();
    system("pause");
    return 0;
}