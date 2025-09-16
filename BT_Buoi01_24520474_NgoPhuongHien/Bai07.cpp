// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
using namespace std;

struct NgayThangNam
{
    int ngay, thang, nam;
};

bool NamNhuan(const NgayThangNam &a)
{
    if (a.nam % 4 != 0 || (a.nam % 100 == 0 && a.nam % 400 != 0))
        return false;
    return true;
}

bool HopLe(const NgayThangNam &a)
{
    if (a.thang <= 0 || a.thang > 12 || a.ngay <= 0)
        return false;
    if (NamNhuan(a))
    {
        if (a.thang == 2 && a.ngay <= 29)
            return true;
    }
    if (!NamNhuan(a))
    {
        if (a.thang == 2 && a.ngay <= 28)
            return true;
    }
    if ((a.thang == 1 || a.thang == 3 || a.thang == 5 || a.thang == 7 || a.thang == 8 || a.thang == 10 || a.thang == 12) && a.ngay <= 31)
        return true;
    else if ((a.thang == 4 || a.thang == 6 || a.thang == 9 || a.thang == 11) && a.ngay <= 30)
        return true;

    return false;
}

void Xuat_ngay_ke(const NgayThangNam &a)
{
    NgayThangNam ngaytiep;

    if (HopLe(a))
    {
        ngaytiep.ngay = a.ngay + 1;
        ngaytiep.thang = a.thang;
        ngaytiep.nam = a.nam;

        if (HopLe(ngaytiep))
        {
            cout << "Ngay ke tiep la: " << ngaytiep.ngay << "/" << ngaytiep.thang << "/" << ngaytiep.nam << endl;
        }
        else
        {
            if (ngaytiep.thang < 12)
            {
                ngaytiep.ngay = 1;
                ngaytiep.thang = a.thang + 1;
            }
            else
            {
                ngaytiep.ngay = 1;
                ngaytiep.thang = 1;
                ngaytiep.nam = a.nam + 1;
            }
            cout << "Ngay ke tiep la: " << ngaytiep.ngay << "/" << ngaytiep.thang << "/" << ngaytiep.nam << endl;
        }
    }
}

int main()
{
    NgayThangNam x;
    cout << "Nhap ngay: ";
    cin >> x.ngay;
    cout << "Nhap thang: ";
    cin >> x.thang;
    cout << "Nhap nam: ";
    cin >> x.nam;
    if (HopLe(x))
        cout << "\nHop le" << endl;
    else
        cout << "\nKhong hop le" << endl;

    Xuat_ngay_ke(x);

    system("pause");
    return 0;
}