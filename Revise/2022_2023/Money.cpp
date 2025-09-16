#include<iostream>
using namespace std;

class Money
{
    private:
        int iEuro;
        int iCent;
    public:
        Money(int e = 0, int c = 0) : iEuro(e), iCent(c) {}
        friend istream& operator >> (istream& in, Money &a);
        Money &operator ++ ()
        {
            iCent++;
            if (iCent >= 100) 
            {
                iCent = iCent - 100;
                iEuro++;
            }
            return *this;
        }

        Money operator ++ (int)
        {
            Money temp = *this;
            iCent++;
            if (iCent >= 100) 
            {
                iCent = iCent - 100;
                iEuro++;
            }
            return temp;
        }
        friend ostream& operator << (ostream& out, const Money &a);
};

istream& operator >> (istream& in, Money& a)
{
    in >> a.iEuro >> a.iCent;
    return in;
}

ostream& operator << (ostream& out, const Money &a)
{
    out << a.iEuro << " euro " << a.iCent << " cent" << endl;
    return out;
}

int main()
{
    Money a;
    cin >> a;
    Money x = a++;
    ++a;
    cout << x << "\n" << a;
    system("pause");
    return 0;
}

