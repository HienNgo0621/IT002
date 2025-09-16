#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;

String ::String(int n)
{
    size = n;
    s = new char[size + 1];
    s[0] = '\0';
}

String ::~String()
{
    cout << "Ham huy duoc goi." << endl;
    delete[] s;
}

int String ::StringLength()
{
    return strlen(s);
}

void String ::StringCat(const char *a)
{
    unsigned int newsize = strlen(s) + strlen(a) + 2;
    char *save = new char[newsize];
    strcpy(save, s);
    strcat(save, " ");
    strcat(save, a);
    delete[] s;
    s = save;
}

char *String ::ReverseString()
{
    char *rev = new char[strlen(s) + 1];
    strcpy(rev, s);
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++)
    {
        swap(rev[i], rev[length - i - 1]);
    }
    rev[length] = '\0';
    return rev;
}

void String ::UpperString()
{
    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = toupper(s[i]);
    }
}

void String ::LowerString()
{
    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = tolower(s[i]);
    }
}
void String ::Input()
{
    cin.getline(s, size);
}

void String ::Output() const
{
    cout << "Chuoi in ra la: " << s << endl;
}