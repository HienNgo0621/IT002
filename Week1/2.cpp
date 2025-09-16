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

void nhap(phanso a[], int n){
    for (int i = 0;  i < n; i ++){
        cin >> a[i].tu >> a[i].mau;
    }
}

void in(phanso a[], int n){
    for (int i = 0;  i < n; i ++){
        rutgon(a[i]);
        if (a[i].mau == 1) cout << a[i].tu << endl;
        else cout << a[i].tu << "/" << a[i].mau << endl;
    }
}

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    phanso x[n];
    nhap(x, n);
    in(x, n);
    system("pause");
    return 0;
}