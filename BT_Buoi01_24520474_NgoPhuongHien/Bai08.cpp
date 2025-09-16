// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
using namespace std;

struct NgayThangNam
{
    int ngay, thang, nam, thu;
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

void Thu_trong_tuan(const NgayThangNam &a)
{
    NgayThangNam tmp;
    long long tong_nam = 0;
    int tong_thang = 0;

    for (int i = 1; i < a.nam; i++)
    {
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            tong_nam += 366;
        else
            tong_nam += 365;
    }

    for (int i = 1; i < a.thang; i++)
    {
        if (NamNhuan(a) && i == 2)
            tong_thang += 29;
        else if (!NamNhuan(a) && i == 2)
            tong_thang += 28;
        else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            tong_thang += 31;
        else
            tong_thang += 30;
    }

    long long tong_ngay = tong_nam + tong_thang + a.ngay;

    tmp.thu = (tong_ngay + 1) % 7;

    string thu[] = {"Thu Bay", "Chu Nhat", "Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau"};
    cout << thu[tmp.thu] << endl;
}

int main()
{
    NgayThangNam x;

    do
    {
        cout << "Moi ban nhap: " << endl;
        cout << "Nhap ngay: ";
        cin >> x.ngay;
        cout << "Nhap thang: ";
        cin >> x.thang;
        cout << "Nhap nam: ";
        cin >> x.nam;
        cout << endl;
    } while (!HopLe(x));

    Thu_trong_tuan(x);

    system("pause");
    return 0;
}