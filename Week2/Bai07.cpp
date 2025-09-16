// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include<iostream>
using namespace std;

class Vehicle{
    private:
        string chuXe, loaiXe;
        long long giaXe;
        short dungtich;
    public:
        Vehicle();
        Vehicle(string, string, long long, short);
        long long TienThue();
        void XuatKeKhai();
};

Vehicle ::Vehicle(){
    cout << "Nhap ten chu xe: "; 
    getline(cin, chuXe);
    cout << "Nhap loai xe: ";
    getline(cin, loaiXe);
    cout << "Nhap gia xe: ";
    cin >> giaXe;
    cout << "Nhap dung tich xylanh: ";
    cin >> dungtich;
}

Vehicle ::Vehicle(string cx, string lx, long long gx, short dt){
    if (gx < 0 || dt < 0){
        cout << "Loi! Tri gia va dung tich phai >= 0.";
            giaXe = 0;
            dungtich = 0;
    }
    else {
        chuXe = cx;
        loaiXe = lx;
        giaXe = gx;
        dungtich = dt;
    }
}

long long Vehicle ::TienThue(){
    double thue;
    if (dungtich < 100){
        thue = giaXe * 0.01;
    }
    else if (dungtich >= 100 && dungtich <= 200){
        thue = giaXe * 0.03;
    }
    else{
        thue = giaXe * 0.05;
    }

    return thue;
}

void Vehicle ::XuatKeKhai(){
    cout << "Ten chu xe: " << chuXe << endl;
    cout << "Loai xe: " << loaiXe << endl;
    cout << "Tri gia xe: " << giaXe << endl;
    cout << "Dung tich xylanh: " << dungtich << endl;
    cout << "Thue xe: " << TienThue() << endl << endl;
}

int main (){
    Vehicle xe1("Nguyen Thi An","Honda Vision", 42310000, 110.5);
    Vehicle xe2("Nguyen Van Binh", "Air Blade", 40000000, 125);
    cout << "Nhap thong tin cho xe 3" << endl;
    Vehicle xe3;

    cout << "\nBang ke khai thong tin dang ky xe" << endl;
    cout << "Xe 1:" << endl;
    xe1.XuatKeKhai();
    cout << "Xe 2:" << endl;
    xe2.XuatKeKhai();
    cout << "Xe 3: " << endl;
    xe3.XuatKeKhai();

    system("pause");
    return 0;
}
