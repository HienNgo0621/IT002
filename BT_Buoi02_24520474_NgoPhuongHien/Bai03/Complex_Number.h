#pragma once

class Complex_Number
{
private:
    float iRealPart, iImaginaryPart;

public:
    Complex_Number(float r = 0, float i = 0);
    void Input();
    void Output() const;
    Complex_Number Sum(const Complex_Number &b);
    Complex_Number Sub(const Complex_Number &b);
    Complex_Number Mult(const Complex_Number &b);
    Complex_Number Div(const Complex_Number &b);
};