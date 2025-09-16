#include<iostream>
using namespace std;

struct phanso{
    int tu;
    int mau;
};

void nhap(phanso a[], int n){
    for (int i = 0;  i < n; i ++){
        cin >> a[i].tu >> a[i].mau;
    }
}

phanso max(phanso a[], int n){
    phanso max = a[0];
    for (int i = 1; i < n; i ++){
        if ((a[i].tu * max.mau - max.tu * a[i].mau) > 0) max = a[i];
    }
    return max;
}

void hoanvi(phanso &a, phanso &b){
    phanso temp = a;
    a = b;
    b = temp;
}

void arrange(phanso a[], int n){
    for (int i = 0; i < n - 1; i++){
        if ((a[i].tu * a[i + 1].mau - a[i + 1].tu * a[i].mau) > 0) hoanvi(a[i], a[i + 1]);
    }
}

void in(phanso a[], int n){
    for (int i = 0;  i < n; i ++){
        if (a[i].mau == 1) cout << a[i].tu << endl;
        else cout << a[i].tu << "/" << a[i].mau << endl;
    }
}

int main(){
    int n;
    cin >> n;
    phanso x[n];
    nhap(x, n);
    phanso maxPhanso = max(x, n);
    cout << "Phan so lon nhat: " << maxPhanso.tu << "/" << maxPhanso.mau << endl;
    arrange(x, n);
    in(x, n);
    system("pause");
    return 0;

}