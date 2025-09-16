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
}

void nhap(phanso &a){
    cin >> a.tu >> a.mau;
}

void in(phanso a){
    rutgon(a);
    if (a.mau == 1) cout << a.tu << endl;
    else cout << a.tu << "/" << a.mau << endl;
}

int main(){
    phanso x;
    nhap(x);
    in(x);
    system("pause");
    return 0;
}