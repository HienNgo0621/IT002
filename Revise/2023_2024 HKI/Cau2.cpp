#include <iostream>
using namespace std;

class cDate
{
private:
    int ngay, thang, nam;

public:
    cDate(int ng = 1, int t = 1, int n = 1) : ngay(ng), thang(t), nam(n) {}
    friend istream &operator>>(istream &in, cDate &a);
    friend ostream &operator<<(ostream &out, const cDate &a);
    cDate operator+(int);
    cDate operator-(int);
    bool isLeapYear();
    void format();
};

istream &operator>>(istream &in, cDate &a)
{
    in >> a.ngay >> a.thang >> a.nam;
    return in;
}

ostream &operator<<(ostream &out, const cDate &a)
{
    out << a.ngay << "/" << a.thang << "/" << a.nam << endl;
    return out;
}

cDate cDate ::operator+(int n)
{
    ngay += n;
    format();
    return *this;
}

cDate cDate ::operator-(int n)
{
    ngay -= n;
    format();
    return *this;
}

bool cDate ::isLeapYear()
{
    if (nam % 4 != 0 || (nam % 100 == 0 && nam % 400 != 0))
        return false;
    return true;
}

void cDate ::format()
{
    while (ngay > 28)
    {
        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
        {
            if (ngay > 31)
            {
                ngay -= 31;
                if (thang == 12)
                {
                    thang = 1;
                    nam += 1;
                }
                else
                    thang += 1;
            }
        }
        if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        {
            if (ngay > 30)
            {
                ngay -= 30;
                thang += 1;
            }
        }
        if (thang == 2)
        {
            if (isLeapYear())
            {
                if (ngay > 29)
                {
                    ngay -= 29;
                    thang += 1;
                }
            }
            else
            {
                if (ngay > 28)
                {
                    ngay -= 28;
                    thang += 1;
                }
            }
        }
    }
}

int main()
{
    cDate x;
    cin >> x;
    x = x + 2;
    cout << x;
    system("pause");
    return 0;
}