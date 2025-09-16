// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
using namespace std;

class Date
{
private:
    int day, month;
    int year;
public:
    Date(int d = 1, int m = 1, int y = 1);
    void Input();
    void Output();
    bool isValid();
    void Format();
    int getDay();
    int getMonth();
    string getDayofWeek();
    int getYear();
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    bool isLeapYear();
    Date IncreaseDate(const Date &a);
    Date DecreaseDate(Date &a);
};

Date ::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void Date ::Input()
{
    cout << "Moi ban nhap." << endl;
    cout << "Nhap ngay: ";
    cin >> day;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;
    cout << endl;
}

void Date ::Output()
{
    cout << getDayofWeek() << " ngay " << day << " thang " << month << " nam " << year << endl;
}

bool Date ::isLeapYear()
{
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
        return false;
    return true;
}

bool Date::isValid() {
        if (year <= 0 || month < 1 || month > 12 || day < 1) return false;
        
        int DaysInMonth[] = {0, 31, isLeapYear() ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return day <= DaysInMonth[month];
}

void Date ::Format()
{
    while (!isValid())
    {
        while(month < 1){
            month += 12;
            year -= 1;
        }
        while(month > 12){
            month -= 12;
            year += 1;
        }
        int DaysInMonth[] = {0, 31, isLeapYear() ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //chi duoc cap nhap thang 2 mot lan, can cap nhat lai 
        int maxDays = DaysInMonth[month];
        
        while (day > maxDays){
            day -= maxDays;
            month += 1;
            if (month > 12){
                month = 1;
                year += 1;
            }
            DaysInMonth[2] = isLeapYear() ? 29 : 28;
            maxDays = DaysInMonth[month];
        }

        while(day <= 0){
            month -= 1;
            if (month <= 0){
                month = 12;
                year -= 1;
            }
            DaysInMonth[2] = (isLeapYear() ? 29 : 28);
            maxDays = DaysInMonth[month];
            day += maxDays;
        }
    }
}

int Date ::getDay()
{
    return day;
}

int Date ::getMonth()
{
    return month;
}

string Date ::getDayofWeek()
{
    int y = year;
    int m = month;
    
    if (m < 3) {
        m += 12;
        y -= 1;
    }

    int K = y % 100;
    int J = y / 100; 
    int dayofweek = (day + (13 * (m + 1)) / 5 + K + (K / 4) + (J / 4) + (5 * J)) % 7;

    string DaysOfWeek[] = {"Thu Bay", "Chu Nhat", "Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau"};
    return DaysOfWeek[dayofweek];
}

int Date ::getYear()
{
    return year;
}

void Date ::setDay(int d)
{
    day = d;
}

void Date ::setMonth(int m)
{
    month = m;
}

void Date ::setYear(int y)
{
    year = y;
}

Date Date ::IncreaseDate(const Date &a)
{
    Date inc;
    inc.day = day + a.day;
    inc.month = month + a.month;
    inc.year = year + a.year;
    inc.Format();
    return inc;
}

Date Date ::DecreaseDate(Date &a)
{
    while (a.year > year || (a.year == year && a.month > month) || (a.year == year && a.month == month) && a.day > day || (a.day == day && a.month == month || a.year == year)){
        cout << "Moi nhap lai thoi gian can giam." << endl;
        a.Input();
    }
    Date dec;
    dec.day = day - a.day;
    dec.month = month - a.month;
    dec.year = year - a.year;
    dec.Format();
    return dec;
}

int main()
{
    Date x;
    x.Input();
    while (!x.isValid()){
        cout << "\nThoi gian khong hop le! Moi nhap lai: " << endl;
        x.Input();
    }
    
    cout << "\nNhap thoi gian muon tang: " << endl;
    Date a;
    a.Input();
    Date in = x.IncreaseDate(a);
    cout << "Thoi gian sau khi tang: ";
    in.Output();
    cout << endl;

    cout << "\nNhap thoi gian muon giam: " << endl;
    Date b;
    b.Input();
    Date de = x.DecreaseDate(b);
    cout << "Thoi gian sau khi giam: ";
    de.Output();
    cout << endl;

    cout << "Thoi gian muon thay doi: " << endl;
    Date change;
    change.Input();
    while (!change.isValid()){
        cout << "\nThoi gian thay doi khong hop le! Moi Nhap lai." << endl;
        change.Input();
    }
    x.setDay(change.getDay());
    x.setMonth(change.getMonth());
    x.setYear(change.getYear());
    cout << "\nThoi gian sau khi thay doi: ";
    x.Output();

    system("pause");
    return 0;
}