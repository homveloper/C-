#include <iostream>
#include <ostream>

using namespace std;

class Fraction{
private:
    int numer;
    int denom;
public:

    Fraction(){
        Fraction(0,0);
    }

    Fraction(int numer ,int denom){
        setNumer(numer);
        setDenom(denom);
    }

    int getNumer(){
        return numer;
    }

    int getDenom(){
        return denom;
    }

    void setNumer(int numer){
        this->numer = numer;
    }

    void setDenom(int denom){
        if(denom != 0)
            this->denom = denom;
        else
            cout<<"[error] denom can't set 0"<<endl;
    }

    // 최대 공약수
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

    // 최소 공배수
    int lcm(int a,int b)
    {
        return a * b / gcd(a, b);
    }

    void setFraction(int numer, int denom){
        this->numer = numer;
        this->denom = denom;
    }

    friend ostream& operator <<(ostream& os, const Fraction& f);


    Fraction operator +(const Fraction& f){
        if(denom != 0 && f.denom != 0){
            if(f.denom == denom)
                return Fraction(numer + f.numer,denom);
            else{
                int lcmNum =  lcm(denom,f.denom);
                return Fraction(numer * lcmNum / denom + f.numer * lcmNum / f.denom, lcm(denom,f.denom));
            }
        }

        return Fraction();
    }
};

ostream& operator <<(ostream& os, const Fraction& f){
    return os<<f.numer<<"/"<<f.denom;
}

void main(){
    Fraction a(3,3);
    Fraction b(2,5);

    Fraction c = a + b;

    cout<<c<<endl;
}