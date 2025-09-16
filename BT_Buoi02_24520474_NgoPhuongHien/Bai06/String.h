#pragma once

class String
{
private:
    char *s;
    unsigned int size;

public:
    String(int n = 100);
    int StringLength();
    void StringCat(const char *a);
    char *ReverseString();
    void UpperString();
    void LowerString();
    void Input();
    void Output() const;
    ~String();
};