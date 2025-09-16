// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cTime.h"
#include "cDate.h"
#include "InterestRate.h"
#include <iostream>
using namespace std;

void InterestRate ::Nhap()
{
    cin >> t;
    cout << "\n";
    cin >> d;
}

void InterestRate ::Xuat()
{
    Format();
    cout << d << t;
}

void InterestRate ::Format()
{
    t.Format(d);
    d.Format();
}

double InterestRate ::soGiay(const InterestRate &a)
{
    double giay_t = t.giay();
    double giay_d = d.giay();
    double giay_a_t = a.t.giay();
    double giay_a_d = a.d.giay();
    return (giay_t - giay_a_t + giay_d - giay_a_d);
}
