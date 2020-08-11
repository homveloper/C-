#include <iostream>
using namespace std;
#include <cstring>

class Fraction
{
private:
    int number;
    int denom;
    int gcd(int a, int b)
    {
        int c;
        while (b != 0)
        {
            c = a % b;
            a = b;
            b = c;
        }
        return a;
    }

    int lcm(int a, int b)
    {
        return a * b / gcd(a, b);
    }

public:
    Fraction()
    {
        number = 0;
        denom = 0;
    }
    Fraction(int n, int d)
    {
        number = n;
        denom = d;
    }

    Fraction operator+(Fraction A)
    {
        Fraction F;
        int temp1, temp2, temp3, temp4;
        temp1 = denom;
        temp2 = A.denom;
        temp3 = number;
        temp4 = A.number;

        F.denom = lcm(A.denom, denom);
        number = number * (F.denom / denom);
        A.number = A.number * (F.denom / A.denom);

        F.number = number + A.number;

        denom = temp1;
        A.denom = temp2;
        number = temp3;
        A.number = temp4;
        return F;
    }
    Fraction operator-(Fraction A)
    {
        Fraction F;
        int temp1, temp2, temp3, temp4;
        temp1 = denom;
        temp2 = A.denom;
        temp3 = number;
        temp4 = A.number;

        F.denom = lcm(A.denom, denom);
        number = number * (F.denom / denom);
        A.number = A.number * (F.denom / A.denom);

        F.number = number - A.number;

        denom = temp1;
        A.denom = temp2;
        number = temp3;
        A.number = temp4;
        return F;
    };
    Fraction operator*(Fraction A)
    {
        Fraction F;
        F.number = number * A.number;
        F.denom = denom * A.denom;
        return F;
    }
    Fraction operator/(Fraction A)
    {
        Fraction F;
        F.number = number * A.denom;
        F.denom = denom * A.number;
        return F;
    }

    void print()
    {
        cout << number << "/" << denom << endl;
    }
};

void main()
{
    Fraction a(3, 5);
    Fraction b(1, 8);

    Fraction c;
    c = a + b;
    c.print();
    c = a - b;
    c.print();
    c = a * b;
    c.print();
    c = a / b;
    c.print();
}