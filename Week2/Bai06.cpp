// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include<iostream>
#include<cstring>
using namespace std;

class String {
    private: 
        char* s;
        unsigned int size;
    public:
        String(int n = 100);
        int StringLength();
        void StringCat(const char* a);
        char* ReverseString();
        void UpperString();
        void LowerString();
        void Input();
        void Output() const;
        ~String();
};

String ::String(int n){
    size = n;
    s = new char[size + 1];
    s[0] = '\0';
}

String ::~String(){
    cout << "Ham huy duoc goi." << endl;
    delete[] s;
}

int String ::StringLength(){
    return strlen(s);
}

void String ::StringCat(const char *a){
    unsigned int newsize = strlen(s) + strlen(a) + 2;
    char *save = new char[newsize];
    strcpy(save, s);
    strcat(save, " ");
    strcat(save, a);
    delete[] s;
    s = save;
}

char* String ::ReverseString(){
    char* rev = new char[strlen(s) + 1];
    strcpy(rev, s);
    int length = strlen(s);
    for (int i = 0; i < length / 2; i ++){
        swap(rev[i], rev[length - i - 1]);
    }
    rev[length] = '\0';
    return rev;
}

void String ::UpperString(){
    for (int i = 0; i < strlen(s); i++){
        s[i] = toupper(s[i]);
    }
}

void String ::LowerString(){
    for (int i = 0; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}
void String ::Input(){
    cin.getline(s, size);
}

void String ::Output() const{
    cout << "Chuoi in ra la: " << s << endl;
}


int main (){
    {
    String str;
    cout << "Nhap chuoi mac dinh: ";
    str.Input();
    cout << "Do dai chuoi la: " << str.StringLength() << endl;
    
    cout << "Nhap chuoi muon noi: ";
    char* a = new char[100]; 
    cin.getline(a, 100);
    cout << "Hai chuoi da duoc noi. ";
    str.StringCat(a);
    str.Output();
    delete[] a;

    cout << "\nChuoi ban dau sau khi dao nguoc: ";
    char* rev = str.ReverseString();
    cout << rev << endl;
    delete[] rev;

    cout << "Da duoc in hoa. ";
    str.UpperString();
    str.Output();

    cout << "Da duoc in thuong. ";
    str.LowerString();
    str.Output();
    }

    system("pause");
    return 0;
}