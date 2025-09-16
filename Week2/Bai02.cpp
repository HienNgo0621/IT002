// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include<iostream>
using namespace std;

class Diem{
    private:
        float iHoanhDo, iTungDo;
    public:
        Diem(float h = 0, float t = 0);
        float getHoanh(); //lay
        float getTung();
        void setHoanh(float); //thay doi
        void setTung(float);
        void TinhTien(float a, float b);
        void Nhap();
        void Xuat() const; 
};

Diem ::Diem(float h, float t){
    iHoanhDo = h;
    iTungDo = t;
}

float Diem ::getHoanh(){
    return iHoanhDo;
}

float Diem ::getTung(){
    return iTungDo;
}

void Diem ::setHoanh(float h){
    iHoanhDo = h;
}

void Diem ::setTung(float t){
    iTungDo = t;
}

void Diem ::TinhTien(float dx, float dy){
    iHoanhDo += dx;
    iTungDo += dy;
}

void Diem ::Nhap(){
    cout << "Nhap hoanh do: ";
    cin >> iHoanhDo;
    cout << "Nhap tung do: "; 
    cin >> iTungDo;
}

void Diem ::Xuat() const{
    cout << "Hoanh do: " << iHoanhDo << endl;
    cout << "Tung do: " << iTungDo << endl;
}

int main (){
    Diem x;
    float dx, dy;
    x.Nhap();
    //Diem tinh tien
    cout << "Nhap gia tri hoanh do tinh tien: "; cin >> dx;
    cout << "Nhap gia tri tung do tinh tien: "; cin >> dy;
    x.TinhTien(dx, dy);
    cout << "Toa do diem sau khi da tinh tien:" << endl;
    x.Xuat();

    //setter getter
    float set_x, set_y;
    cout << "\nNhap gia tri hoanh do moi: "; cin >> set_x;
    cout << "Nhap gia tri tung do moi: "; cin >> set_y;
    x.setHoanh(set_x);
    x.setTung(set_y);
    float h = x.getHoanh();
    float t = x.getTung();
    cout << "Hoanh do moi la: " << h;
    cout << "\nTung do moi la: " << t << endl;
    system("pause");
    return 0;
}

