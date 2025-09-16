// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
using namespace std;

class Time
{
private:
    short hrs, mins, secs;

public:
    Time(short h = 0, short m = 0, short s = 0);
    void Input();
    void Output();
    void Format();
    short getHour();
    short getMin();
    short getSec();
    void setHour(short);
    void setMin(short);
    void setSec(short);
    Time IncreaseTime(const Time &a);
    Time DecreaseTime(const Time &a);
};

Time ::Time(short h, short m, short s)
{
    hrs = h;
    mins = m;
    secs = s;
}

void Time ::Input()
{
    do
    {
        cout << "Nhap gio: ";
        cin >> hrs;
    } while (hrs < 0);
    do
    {
        cout << "Nhap phut: ";
        cin >> mins;
    } while (mins < 0);
    do
    {
        cout << "Nhap giay: ";
        cin >> secs;
    } while (secs < 0);
}

void Time ::Output()
{
    Format();
    cout << hrs << " gio " << mins << " phut " << secs << " giay" << endl;
}

void Time ::Format()
{
    while (secs >= 60 || secs < 0)
    {
        if (secs >= 60)
        {
            secs = secs - 60;
            mins = mins + 1;
        }
        else if (secs < 0)
        {
            secs = 60 + secs;
            mins = mins - 1;
        }
    }

    while (mins >= 60 || mins < 0)
    {
        if (mins >= 60)
        {
            mins = mins - 60;
            hrs = hrs + 1;
        }
        else if (mins < 0)
        {
            mins = 60 + mins ;
            hrs = hrs - 1;
        }
    }

    while (hrs >= 24 || hrs < 0)
    {
        if (hrs >= 24)
        {
            hrs = hrs - 24;
        }
        else if (hrs < 0)
        {
            hrs = 24 + hrs;
        }
    }
}

Time Time ::IncreaseTime(const Time &a)
{
    Time increase;
    increase.hrs = hrs + a.hrs;
    increase.mins = mins + a.mins;
    increase.secs = secs + a.secs;
    increase.Format();
    return increase;
}

Time Time ::DecreaseTime(const Time &a)
{
    Time decrease;
    decrease.hrs = hrs - a.hrs;
    decrease.mins = mins - a.mins;
    decrease.secs = secs - a.secs;
    decrease.Format();
    return decrease;
}

short Time ::getHour()
{
    return hrs;
}

short Time ::getMin()
{
    return mins;
}

short Time ::getSec()
{
    return secs;
}

void Time ::setHour(short h)
{
    hrs = h;
}

void Time ::setMin(short m)
{
    mins = m;
}

void Time ::setSec(short s)
{
    secs = s;
}

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