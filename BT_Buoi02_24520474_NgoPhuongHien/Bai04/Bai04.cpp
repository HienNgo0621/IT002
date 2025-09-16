// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time a, inc, dec;
    a.Input();
    // Increase/Decrease time
    cout << "\nNhap khoang thoi gian muon tang them: " << endl;
    inc.Input();
    Time iTime = a.IncreaseTime(inc);
    cout << "Thoi gian sau khi tang them: ";
    iTime.Output();

    cout << "\nNhap khoang thoi gian muon giam di: " << endl;
    dec.Input();
    Time dTime = a.DecreaseTime(dec);
    cout << "Thoi gian sau khi giam di: ";
    dTime.Output();

    // setter/getter
    Time change;
    cout << "\nNhap thoi gian muon thay doi: " << endl;
    change.Input();
    short h = change.getHour();
    short m = change.getMin();
    short s = change.getSec();

    a.setHour(h);
    a.setMin(m);
    a.setSec(s);
    cout << "Thoi gian sau khi thay doi: ";
    a.Output();

    system("pause");
    return 0;
}