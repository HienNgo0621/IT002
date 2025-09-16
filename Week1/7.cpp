#include<iostream>
using namespace std;

struct NgayThang{
    int ngay;
    int thang;
    long nam;
};

// bool test(ngaythang a){
//     if (a.ngay <= 0 || a.thang <= 0) return false;
//     if ((a.nam % 4 != 0 || (a.nam % 100 == 0 && a.nam % 400 != 0)) && a.thang == 2 && a.ngay <= 28) return true;
//     else if ((a.nam % 400 == 0 || (a.nam % 100 != 0 && a.nam % 4 == 0)) && a.thang == 2 && a.ngay <= 29) return true;
//     if ((a.thang == 1 || a.thang == 3 || a.thang == 5 || a.thang == 7 || a.thang == 8 || a.thang == 10 || a.thang == 12) && a.ngay <= 31) return true;
//     else if ((a.thang == 4 || a.thang == 6 || a.thang == 9 || a.thang == 11) && a.ngay <= 30) return true;
//     return false;
// }

bool Nam_Nhuan(ngaythang a){
    if (a.nam % 4 != 0 || (a.nam % 100 == 0 && a.nam % 400 != 0)) return false;
    return true;
}

bool 

int main(){
    ngaythang a;
    cin >> a.ngay >> a.thang >> a.nam;
    cout << Nam_Nhuan(a) << endl;
    system("pause");
    return 0;
}