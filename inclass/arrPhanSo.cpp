#include<iostream>
#include<vector>
#include<ctime>
#include<cmath>
using namespace std;

class cPhanSo{
    private:
        int tu, mau;
    public:
        cPhanSo(int t = 0, int m = 1); //chi can mot ham khong can khai bao 3 constructor (), (int) va (int, int)
        void Nhap();
        void Xuat() const;
        cPhanSo Tong(const cPhanSo &b) const;

        int getTuSo();
        int getMauSo();
        void setTuSo(int);
        void setMauSo(int);
};

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

int cPhanSo ::getMauSo(){
    return mau;
}

void cPhanSo ::setTuSo(int t){
    tu = t;
}

void cPhanSo ::setMauSo(int m){
    mau = m;;
}

//class arr
class arrPhanSo{
    private:
        vector<cPhanSo> arrPS; 
    public:
        arrPhanSo(){}
        arrPhanSo(int n);
        void input();
        void output() const;
        cPhanSo Find_Max();
        int count_Prime();
        void Sort();

};

arrPhanSo ::arrPhanSo(int n){
    arrPS.resize(n);
    srand(time(0));
    for (int i = 0; i < n; i ++){
        int iTuSo = rand() % (2* n + 1) - n; //tu -n den b
        int iMauSo = rand() % n + 1; //tu 1 den n

        arrPS[i] = cPhanSo(iTuSo, iMauSo);
    }

}

void arrPhanSo ::input(){
    int n; 
    cout << "Nhap n: "; cin >> n;
    arrPS.resize(n);
    for (int i = 0; i < arrPS.size(); i ++){
        arrPS[i].Nhap();
    }
}

void arrPhanSo ::output() const{
    for (int i = 0; i < arrPS.size(); i ++){
        arrPS[i].Xuat();
        cout << endl;
    }
}

cPhanSo arrPhanSo ::Find_Max(){
    cPhanSo maxPS = arrPS[0];
    for (int i = 0; i < arrPS.size(); i ++){
        if (maxPS.getTuSo() * arrPS[i].getMauSo() < arrPS[i].getTuSo() * maxPS.getMauSo()) maxPS = arrPS[i];
    }
    return maxPS;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= (n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int arrPhanSo ::count_Prime(){
    int cnt = 0;
    for (int i = 0; i < arrPS.size(); i ++){
        if (isPrime(abs(arrPS[i].getTuSo()))) cnt++;
    }
    return cnt;
}

void arrPhanSo ::Sort(){
    int pos, x;
    for (int i = 1; i < arrPS.size(); i++)
    {
        cPhanSo temp = arrPS[i]; // lưu lại giá trị của x tránh bị ghi đè khi dịch chuyển các phần tử
        pos = i - 1;
        double x = (double) temp.getTuSo() / temp.getMauSo();
        // tìm vị trí thích hợp để chèn x
        while (pos >= 0 && ((double) arrPS[pos].getTuSo() / arrPS[pos].getMauSo()) > x)
        {
            // kết hợp với dịch chuyển phần tử sang phải để chừa chỗ cho x
            arrPS[pos + 1] = arrPS[pos];
            pos--;
        }
        // chèn x vào vị trí đã tìm được
        arrPS[pos + 1] = temp;
    }
}

int main (){
    arrPhanSo x;
    x.input();
    x.output();
    cPhanSo t = x.Find_Max();
    cout << "Phan so lon nhat: ";
    t.Xuat();
    cout << "\nSo phan so co tu la snt: " << x.count_Prime() << endl;
    cout << "Sap xep phan so: ";
    x.Sort();
    x.output();
    system("pause");
    return 0;
}