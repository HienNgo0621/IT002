// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo
{
    int iTuSo;
    int iMauSo;
};

void NhapPS(PhanSo a[], int n);
void XuatPS(PhanSo a[], int n);
int UCLN(int a, int b);
void Dinh_dang_PS(PhanSo &a);
bool be_lon(const PhanSo &a, const PhanSo &b);
bool lon_be(const PhanSo &a, const PhanSo &b);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    PhanSo x[n];
    NhapPS(x, n);
    sort(x, x + n, be_lon);
    cout << "\nPhan so lon nhat: " << x[n - 1].iTuSo << "/" << x[n - 1].iMauSo << endl;
    
    cout << "Day tang dan:" << endl;
    XuatPS(x, n);
    
    cout << "\nDay giam dan:" << endl;;
    sort(x, x + n, lon_be);
    XuatPS(x, n);
   
    system("pause");
    return 0;
}

void NhapPS(PhanSo a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap tu so " << i + 1 << ": ";
        cin >> a[i].iTuSo;
        cout << "Nhap mau so " << i + 1 << ": ";
        cin >> a[i].iMauSo;
        while (a[i].iMauSo == 0)
        {
            cout << "Moi ban nhap lai mau so: ";
            cin >> a[i].iMauSo;
        }
        Dinh_dang_PS(a[i]);
    }
}

void XuatPS(PhanSo a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].iMauSo != 1)
        {
            cout << a[i].iTuSo << "/" << a[i].iMauSo << endl;
        }
        else
            cout << a[i].iTuSo << endl;
    }
}

int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

void Dinh_dang_PS(PhanSo &a)
{
    int k = UCLN(abs(a.iTuSo), abs(a.iMauSo));
    a.iTuSo /= k;
    a.iMauSo /= k;

    if (a.iMauSo < 0)
    {
        a.iMauSo = abs(a.iMauSo);
        a.iTuSo = a.iTuSo * (-1);
    }
}

bool be_lon(const PhanSo &a, const PhanSo &b)
{
    return a.iTuSo * b.iMauSo < b.iTuSo * a.iMauSo;
}

bool lon_be(const PhanSo &a, const PhanSo &b)
{
    return a.iTuSo * b.iMauSo > b.iTuSo * a.iMauSo;
}