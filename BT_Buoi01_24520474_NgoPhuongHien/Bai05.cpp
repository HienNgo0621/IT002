// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>

using namespace std;

struct SinhVien
{
    string hoten;
    float toan, van;
    float dtb;
};

void NhapSV(SinhVien &a)
{
    cout << "Ho ten: ";
    getline(cin, a.hoten);
    cout << "Diem toan: ";
    cin >> a.toan;
    cout << "Diem van: ";
    cin >> a.van;
}

float Diem_TB(SinhVien &a)
{
    a.dtb = (a.toan + a.van) / 2;
    return a.dtb;
}

int main()
{
    SinhVien x;
    NhapSV(x);
    cout << "Diem trung binh: " << Diem_TB(x) << endl;
    system("pause");
    return 0;
}