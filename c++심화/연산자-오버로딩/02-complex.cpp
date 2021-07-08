#include "02-complex.h"

Complex::Complex(const char* str) {
    // 입력받은 문자열을 분석하여 real과 img를 찾는다.
    // 여기서 문자열의 형태는 다음과 같다. "[부호](실수부)(부호)i(허수부)"
    // []는 생략 가능하다는 의미이다.

    int begin = 0, end = strlen(str);
    img = 0.0;
    real = 0.0;

    // 1. i의 위치를 찾는다.

    int pos_i = -1;
    for(; pos_i != end; pos_i++)
        if(str[pos_i] == 'i')
            break;

    // 2. 'i'가 없다면 실수만 있다.
    size_t size;
    if ( pos_i == -1) {
        real = getNumber(str, begin, end-1);
    }

    // 3. 'i'가 있다면, 실수부와 허수부를 나누어서 처리합니다.
    real = getNumber(str, begin, pos_i - 1);
    img = getNumber(str, pos_i + 1, end - 1);

    if (pos_i >= 1 && str[pos_i - 1] == '-')
        img *= -1.0;
}


double Complex::getNumber(const char* str, int begin, int end) {
   return std::stod(std::string(str).substr(begin, end));
}

Complex Complex::operator+(const Complex &c) const
{
    return Complex(this->real + c.real, this->img + c.img);
}

Complex Complex::operator+(const char* str) const {
    return (*this) + Complex(str);
}

Complex Complex::operator-(const Complex &c) const
{
    return Complex(this->real - c.real, this->img - c.img);
}

Complex Complex::operator-(const char* str) const{
    return (*this) - Complex(str);    
}

Complex Complex::operator*(const Complex &c) const
{
    return Complex(this->real * c.real - this->img * c.img, this->real * c.img + this->img * c.real);
}

Complex Complex::operator*(const char* str) const{
    return (*this) * Complex(str);    
}

Complex Complex::operator/(const Complex &c) const
{
    return Complex(
        (this->real * c.real + this->img * c.img) / (c.real * c.real + c.img + c.img),
        (this->img * c.real - this->real * c.img) / (c.real * c.real + c.img * c.img));
}

Complex Complex::operator/(const char* str) const{
    return (*this) / Complex(str);    
}

Complex& Complex::operator=(const Complex &c)
{
    real = c.real;
    img = c.img;

    return *this;
}

Complex& Complex::operator=(const char* str){
    Complex temp(str);

    real = temp.real;
    img = temp.img;

    return *this;
}

Complex &Complex::operator+=(const Complex &c)
{
    // 미리 구현한 사칙 연산자와 대입 연산자를 재활용
    (*this) = (*this) + c;
    return *this;
}
Complex &Complex::operator-=(const Complex &c)
{
    (*this) = (*this) - c;
    return *this;
}
Complex &Complex::operator*=(const Complex &c)
{
    (*this) = (*this) * c;
    return *this;
}
Complex &Complex::operator/=(const Complex &c)
{
    (*this) = (*this) / c;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Complex &c)
{
    os << "(" << c.real << ", " << c.img << ")";

    return os;
}

int main()
{
    Complex a(1.0, 2.0);
    Complex b(3.0, -2.0);
    Complex f = "-3-i4";

    std::cout<<f<<std::endl;
}