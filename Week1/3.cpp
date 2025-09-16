#include<iostream>
using namespace std;

struct phanso{
    int tu;
    int mau;
};

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

void rutgon(phanso &a){
    int k = gcd(a.tu, a.mau);
    a.tu /= k;
    a.mau /= k;
    if (a.mau == 1) cout << a.tu << endl;
    else cout << a.tu << "/" << a.mau << endl;
}

void nhap(phanso &a, phanso &b){
        cin >> a.tu >> a.mau >> b.tu >> b.mau;
}

void sum(phanso a, phanso b){
    phanso sum;
    sum.tu = a.tu * b.mau + b.tu * a.mau;
    sum.mau = a.mau * b.mau;
    rutgon(sum);
}

void sub(phanso a, phanso b){
    phanso sub;
    sub.tu = a.tu * b.mau - b.tu * a.mau;
    sub.mau = a.mau * b.mau;
    rutgon(sub);
}

void mul(phanso a, phanso b){
    phanso mul;
    mul.tu = a.tu * b.tu;
    mul.mau = a.mau * b.mau;
    rutgon(mul);
}

void div(phanso a, phanso b){
    phanso div;
    div.tu = a.tu * b.mau;
    div.mau = a.mau * b.tu;
    rutgon(div);
}

int main(){
    phanso x, y;
    nhap(x, y);
    sum(x, y);
    sub(x, y);
    mul(x, y);
    div(x, y);
    system("pause");
    return 0;
}