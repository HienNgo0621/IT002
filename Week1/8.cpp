#include <iostream>
using namespace std;

struct ngaythang
{
    int ngay;
    int thang;
    int thu;
    long nam;
};

bool test(ngaythang a)
{
    if (a.ngay <= 0 || a.thang <= 0)
        return false;
    if ((a.nam % 4 != 0 || (a.nam % 100 == 0 && a.nam % 400 != 0)) && a.thang == 2 && a.ngay <= 28)
        return true;
    else if ((a.nam % 400 == 0 || (a.nam % 100 != 0 && a.nam % 4 == 0)) && a.thang == 2 && a.ngay <= 29)
        return true;
    if ((a.thang == 1 || a.thang == 3 || a.thang == 5 || a.thang == 7 || a.thang == 8 || a.thang == 10 || a.thang == 12) && a.ngay <= 31)
        return true;
    else if ((a.thang == 4 || a.thang == 6 || a.thang == 9 || a.thang == 11) && a.ngay <= 30)
        return true;
    return false;
}

void Thu_Trong_Tuan(ngaythang a)
{
    int k = a.nam % 100; // hai chu so cuoi nam
    int j = a.nam / 100; // hai chu so dau nam
    if (test(a))
    {
        a.thu = (a.ngay + ((13 * (a.thang + 1)) / 5) + k + (k / 4) + (j / 4) + 5 * j) % 7;
        cout << "Thu " << a.thu << endl;
    }
    else
        cout << "Khong hop le" << endl;
}

int main()
{
    ngaythang a;
    cin >> a.ngay >> a.thang >> a.nam;
    Thu_Trong_Tuan(a);
    system("pause");
    return 0;
}