#include "cLanh.h"
#include "cQuat.h"
#include "cQuatDien.h"
#include "cQuatDung.h"
#include "cQuatHoi.h"
#include "cLanh1.h"
#include "cLanh2.h"
#include "cHoaDon.h"
#include "cListHoaDon.h"
#include "cThongTin.h"
#include "cThongTinThietBi.h"
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    vector<cListHoaDon> a;
    cout << "So luong hoa don muon nhap: "; 
    unsigned int n; cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i ++){
        cout << "Nhap thong tin hoa don " << i + 1 << endl;
        a[i].NhapDS();
    }

    ofstream fout("danh_sach_hoa_don.txt", ios::app);
    for (int i = 0; i < n; i ++){
        cout << "Hoa don thu " << i + 1 << endl;
        fout << a[i];
    }
    fout.close();
    system("pause");
    return 0;
}