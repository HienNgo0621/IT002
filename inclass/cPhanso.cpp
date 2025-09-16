#include<iostream>
using namespace std;

class cPhanSo{
    private:
        int tu, mau;
    public:
        //nhom cac ham khoi tao -> nhom cac ham get/set -> nhom cac ham xu li yeu cau: hau nhu moi class deu phai co
        //set/get: dung de thay doi du lieu cua private


        // cPhanSo(){
        //     tu = 0;
        //     mau = 1;
        // }
        // cPhanSo(int); //khai bao nguyen mau ham khong can khai bao bien
        cPhanSo(int t = 0, int m = 1); //chi can mot ham khong can khai bao 3 constructor (), (int) va (int, int)
        void Nhap();
        void Xuat() const;
        cPhanSo Tong(const cPhanSo &b) const;
        ~cPhanSo(){
            cout << "Ham huy bo duoc goi" << endl;
        }

        int getTuSo();
        int getMauSo();
        void setTuSo(int);
        void setMauSo(int);
};

// cPhanSo ::cPhanSo(int t){
//     tu = t;
//     mau = 1;
// }

cPhanSo ::cPhanSo(int t, int m){
    tu = t;
    mau = m;
}

void cPhanSo:: Nhap(){
    cin >> tu >> mau;
}

void cPhanSo ::Xuat() const {
    cout << tu << "/" << mau;
}

cPhanSo cPhanSo:: Tong(const cPhanSo &b) const {
    cPhanSo sum;
    sum.tu = tu * b.mau + b.tu * mau;
    sum.mau = mau * b.mau;
    return sum;
}

int cPhanSo ::getTuSo(){
    return tu;
}

int cPhanSo ::getTuSo(){
    return mau;
}

void cPhanSo ::setTuSo(int t){
    tu = t;
}

void cPhanSo ::setTuSo(int m){
    mau = m;;
}

int main (){
    cPhanSo a, b;
    a.Nhap();
    b.Nhap();
    cPhanSo sum = a.Tong(b);
    sum.Xuat();
    cout << endl;

    system("pause");
    return 0;
}