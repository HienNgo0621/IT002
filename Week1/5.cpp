#include<iostream>

using namespace std;

struct sinhvien{
    string hoten;
    float toan, van;
    float dtb;
};

void scan(sinhvien &a){
    cout << "Ho ten: " ; getline(cin, a.hoten);
    cout << "Diem toan: "; cin >> a.toan; 
    cout << "Diem van: "; cin >> a.van;
}

float diemtb(sinhvien &a){
    a.dtb = (a.toan + a.van) / 2;
    return a.dtb;
}

int main (){
    sinhvien x;
    scan(x);
    cout << "Diem trung binh: " << diemtb(x);
    system("pause");
    return 0;
}