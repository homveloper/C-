#include <iostream>
using namespace std;

class Complex{
private:
    double realNumber;
    double  imaginaryNumber;

public:

    void init(double realNumber, double imaginaryNumber){
        this->realNumber = realNumber;
        this->imaginaryNumber = imaginaryNumber;
    }

    void setRealNumber(double realNumber){
        this->realNumber = realNumber;
    }

    double getRealNumber(){
        return realNumber;
    }

    void setImaginaryNumber(double imaginaryNumber){
        this->imaginaryNumber = imaginaryNumber;
    }

    double getImaginaryNumber(){
        return imaginaryNumber;
    }

    void print(){
        cout<<realNumber<<" + "<<imaginaryNumber<<"i"<<endl;
    }

    void add(Complex c){
        realNumber += c.realNumber;
        imaginaryNumber += c.imaginaryNumber;
    }
    
    void difference(Complex c){
        realNumber -= c.realNumber;
        imaginaryNumber -= c.imaginaryNumber;
    }
};

void main(){
    Complex c1,c2,c3;

    c1.init(3,5);
    c2.init(4,2);
    c3.init(1,2);

    c1.add(c3);
    c2.difference(c3);

    c1.print();
    c2.print();
}