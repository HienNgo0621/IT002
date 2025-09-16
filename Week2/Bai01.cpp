// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include<iostream>
#include<cmath>
using namespace std;

class PhanSo{
    private:
        int iTuSo, iMauSo;
        void RutGon();
    public:
        PhanSo(int t = 0, int m = 1);
        void Nhap();
        void Xuat();
        PhanSo Cong(const PhanSo &b);
        PhanSo Tru(const PhanSo &b);
        PhanSo Nhan(const PhanSo &b);
        PhanSo Chia(const PhanSo &b);
};

PhanSo ::PhanSo(int t, int m){
    if (m == 0){
        cout << "Loi mau = 0! Tu dong dac ve mac dinh!" << endl;
        m = 1;
    }
    iTuSo = t;
    iMauSo = m;
}

int UCLN(int a, int b){
    if (b == 0) return a;
    return UCLN(b, a % b);
}

void PhanSo ::RutGon(){
    int gcd = UCLN(abs(iTuSo), abs(iMauSo));
    iTuSo /= gcd;
    iMauSo /= gcd;
    if (iMauSo < 0){
        iTuSo = iTuSo * (-1);
        iMauSo = iMauSo * (-1);
    }
}

void PhanSo ::Nhap(){
    cout << "Nhap tu so: ";
    cin >> iTuSo;
    do{
        cout << "Nhap mau so: ";
        cin >> iMauSo;
    } while(iMauSo == 0);
}

void PhanSo ::Xuat(){
    RutGon();
    if (iMauSo == 1 || iTuSo == 0){
        cout << iTuSo << endl;
    }
    else {
        cout << iTuSo << "/" << iMauSo<< endl;
    }
}

PhanSo PhanSo ::Cong(const PhanSo &b){
    PhanSo tong;
    tong.iTuSo = iTuSo * b.iMauSo + b.iTuSo * iMauSo;
    tong.iMauSo = iMauSo * b.iMauSo;;
    return tong;
}

PhanSo PhanSo ::Tru(const PhanSo &b){
    PhanSo hieu;
    hieu.iTuSo = iTuSo * b.iMauSo - b.iTuSo * iMauSo;
    hieu.iMauSo = iMauSo * b.iMauSo;
    return hieu;
}

PhanSo PhanSo ::Nhan(const PhanSo &b){
    PhanSo tich;
    tich.iTuSo = iTuSo * b.iTuSo;
    tich.iMauSo = iMauSo * b.iMauSo;
    return tich;
}

PhanSo PhanSo ::Chia(const PhanSo &b){
    PhanSo thuong;
    if (b.iTuSo == 0) {
        cout << "Loi chia cho 0, tra ve phan so dau tien" << endl;
        return *this;
    }
    thuong.iTuSo = iTuSo * b.iMauSo;
    thuong.iMauSo = iMauSo * b.iTuSo;
    return thuong;
}

int main(){
    PhanSo x, y;
    x.Nhap();
    y.Nhap();
    PhanSo tong = x.Cong(y);
    tong.Xuat();
    PhanSo hieu = x.Tru(y);
    hieu.Xuat();
    PhanSo tich = x.Nhan(y);
    tich.Xuat();
    PhanSo thuong = x.Chia(y);
    thuong.Xuat();
    system("pause");
    return 0;
}