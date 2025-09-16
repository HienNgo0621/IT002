// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "iostream"
using namespace std;

struct PhanSo
{
    int iTuSo;
    int iMauSo;
};

void NhapPS(PhanSo &a);
void XuatPS(const PhanSo &a);
int UCLN(int a, int b);
void Dinh_dang_PS(PhanSo &a);

int main()
{
    PhanSo x;
    NhapPS(x);
    Dinh_dang_PS(x);
    XuatPS(x);
    system("pause");
    return 0;
}

void NhapPS(PhanSo &a)
{
    cout << "Nhap tu so: ";
    cin >> a.iTuSo;
    cout << "Nhap mau so: ";
    cin >> a.iMauSo;
    while (a.iMauSo == 0)
    {
        cout << "Moi ban nhap lai mau so: ";
        cin >> a.iMauSo;
    }
}

void XuatPS(const PhanSo &a)
{
    if (a.iMauSo != 1)
    {
        cout << a.iTuSo << "/" << a.iMauSo << endl;
    }
    else
        cout << a.iTuSo << endl;
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