#include "Venus.h"
#include "Mars.h"
#include "Jupiter.h"
#include "cSmartPhone.h"
#include<iostream>
using namespace std;

cSmartPhone ::cSmartPhone(){
    dongsp = NULL;
}

cSmartPhone ::~cSmartPhone(){
    delete dongsp;
}

ostream& operator << (ostream& out, const cSmartPhone &a){
    out << "Smartphone: " << a.maso << " ";
    if (a.dong == 1) {
        out << "Venus " << a.dongsp->giaNhap() << endl;
    } else if (a.dong == 2){
        out << "Mars " << a.dongsp->giaNhap() << endl;
    } else {
        out << "Jupiter " << a.dongsp->giaNhap() << endl;
    }
    a.dongsp->Xuat(out);
    return out;
}

void cSmartPhone ::NhapSP(){
    cout << "Dong smartphone (1 - Venus, 2 - Mars, 3 - Jupiter): "; cin >> dong;
    cout << "\tNhap ma so: "; cin >> maso;
    if (dong == 1) dongsp = new Venus;
    else if (dong == 2) dongsp = new Mars;
    else dongsp = new Jupiter;
    dongsp->Nhap();
}