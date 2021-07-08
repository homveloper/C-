#include <iostream>
#include <string>
#include <cstring>

class Complex
{
private:
    double real, img; // 실수부, 허수부

    double getNumber(const char* str, int begin, int end);

public:
    Complex(double real, double img) : real(real), img(img) {}
    Complex(const char* str);
    
    Complex operator+(const Complex& c) const;
    Complex operator+(const char* str) const;
    Complex operator-(const Complex& c) const;
    Complex operator-(const char* str) const;
    Complex operator*(const Complex& c) const;
    Complex operator*(const char* str) const;
    Complex operator/(const Complex& c) const;
    Complex operator/(const char* str) const;
    Complex& operator=(const Complex& c);
    Complex& operator=(const char* str);

    Complex& operator+=(const Complex& c);
    Complex& operator-=(const Complex& c);
    Complex& operator*=(const Complex& c);
    Complex& operator/=(const Complex& c);

    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};