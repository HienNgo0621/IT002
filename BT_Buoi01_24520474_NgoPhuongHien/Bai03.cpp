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
PhanSo CongPS(PhanSo a, PhanSo b);
PhanSo TruPS(PhanSo a, PhanSo b);
PhanSo NhanPS(PhanSo a, PhanSo b);
PhanSo ChiaPS(PhanSo a, PhanSo b);

int main()
{
    PhanSo x, y, kq_cong, kq_tru, kq_nhan, kq_chia;
    NhapPS(x);
    NhapPS(y);
    kq_cong = CongPS(x, y);
    kq_tru = TruPS(x, y);
    kq_nhan = NhanPS(x, y);
    kq_chia = ChiaPS(x, y);
    cout << "Tong: ";
    XuatPS(kq_cong);
    cout << "Hieu: ";
    XuatPS(kq_tru);
    cout << "Tich: ";
    XuatPS(kq_nhan);
    cout << "Thuong: ";
    XuatPS(kq_chia);

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

PhanSo CongPS(PhanSo a, PhanSo b)
{
    PhanSo tong;
    tong.iTuSo = a.iTuSo * b.iMauSo + b.iTuSo * a.iMauSo;
    tong.iMauSo = a.iMauSo * b.iMauSo;
    Dinh_dang_PS(tong);
    return tong;
}

PhanSo TruPS(PhanSo a, PhanSo b)
{
    PhanSo hieu;
    hieu.iTuSo = a.iTuSo * b.iMauSo - b.iTuSo * a.iMauSo;
    hieu.iMauSo = a.iMauSo * b.iMauSo;
    Dinh_dang_PS(hieu);
    return hieu;
}

PhanSo NhanPS(PhanSo a, PhanSo b)
{
    PhanSo tich;
    tich.iTuSo = a.iTuSo * b.iTuSo;
    tich.iMauSo = a.iMauSo * b.iMauSo;
    Dinh_dang_PS(tich);
    return tich;
}

PhanSo ChiaPS(PhanSo a, PhanSo b)
{
    PhanSo thuong;
    thuong.iTuSo = a.iTuSo * b.iMauSo;
    thuong.iMauSo = a.iMauSo * b.iTuSo;
    Dinh_dang_PS(thuong);
    return thuong;
}
