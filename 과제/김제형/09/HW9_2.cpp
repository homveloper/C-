#include <iostream>
using namespace std;

class Complex
{
    public:
        int realNumber;
        int imaginaryNumber;
        int getReal(){ 
            return realNumber;
        }
       int getImaginary(){
            return imaginaryNumber;
        }

        void set(int RN, int IN){
            realNumber = RN;
            imaginaryNumber = IN;
        }

        void print(){
            cout<<realNumber<<" + "<<imaginaryNumber<<"i"<<endl;;
        }
        Complex operator +(Complex A){
            Complex C;
            C.realNumber = realNumber + A.realNumber;
            C.imaginaryNumber = imaginaryNumber + A.imaginaryNumber;
            return C;
        }
        Complex operator -(Complex A){
            Complex C;
            C.realNumber = realNumber - A.realNumber;
            C.imaginaryNumber = imaginaryNumber - A.imaginaryNumber;
            return C;
        }
};

int main(){
    Complex A,B,C,D;
    A.set(5,5);
    B.set(4,4);

    C=A+B;
    C.print();
    D=A-B;
    D.print();
}