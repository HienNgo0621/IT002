#include<iostream>
using namespace std;

class cNgay
{
    private:
        int nam, thang, ngay;
    public:
        cNgay(int n = 1, int t = 1, int ng = 1) : nam(n), thang(t), ngay(ng) {}
        friend istream& operator >> (istream& in, cNgay &a);
        int SoSanh(const cNgay &a){
            if ((nam <= a.nam && thang <= a.thang && ngay < a.ngay) || (nam < a.nam) || (nam <= a.nam && thang < a.thang)) return -1;
            else if (nam == a.nam && thang == a.thang && ngay == a.ngay) return 0;
            else return 1;
        }
};

istream& operator >> (istream& in, cNgay &a)
{
    in >> a.nam >> a.thang >> a.ngay;
    return in;
}


int main()
{
    cNgay ng1; // ng1 sẽ có giá trị ngày 1 tháng 1 năm 1
    cNgay ng2(2017, 1, 7); // ng2 sẽ có giá trị ngày 7 tháng 1 năm 2017
    cin>>ng1;
    int kq = ng1.SoSanh(ng2);
    if(kq == -1)
    cout << "Ngay 1 truoc ngay 2" << endl;
    else if (kq == 0)
    cout << "Ngay 1 va ngay 2 la cung 1 ngay" << endl;
    else
    cout << "Ngay 1 sau ngay 2" << endl;
    system("pause");
    return 0;
}