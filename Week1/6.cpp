#include<iostream>

using namespace std;

struct sinhvien{
    string hoten;
    float toan, van;
    float dtb;
};

void scan(sinhvien a[], int n){
    for (int i = 0; i < n; i ++){
        cin.ignore();
        cout << "Ho ten sinh vien " << i + 1 << ": " ; getline(cin, a[i].hoten);
        cout << "Diem toan: "; cin >> a[i].toan; 
        cout << "Diem van: "; cin >> a[i].van;
    }
}

void dtb(sinhvien a[], int n){
    for (int i = 0; i < n; i ++){
        a[i].dtb = (a[i].toan + a[i].van) / 2;
    }
}

float diemtb_max(sinhvien a[], int n){
    float max = a[0].dtb;
    for (int i = 1; i < n; i ++){
        if (a[i].dtb > max) max = a[i].dtb;
    }
    return max;
}

float diemtb_min(sinhvien a[], int n){
    float min = a[n - 1].dtb;
    for (int i = 0; i < n - 1; i ++){
        if (a[i].dtb < min) min = a[i].dtb;
    }
    return min;
}

int main (){
    int n; cout << "Nhap so luong sinh vien: "; cin >> n;
    sinhvien x[n];
    scan(x, n);
    dtb(x, n);
    cout << "Diem trung binh cao nhat: " << diemtb_max(x, n);
    cout << "\nDiem trung binh thap nhat: " << diemtb_min(x, n) << endl;
    system("pause");
    return 0;
}