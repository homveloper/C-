#include "iostream"
using namespace std;

int main(){
    int x = 10, y = 3,  z = 2;

    x += y -= 2;

    cout<<"x = "<<x<<"  y = "<<y<<"   z = "<<z<<endl;
    x = 10, y = 3, z = 2;

    x *= y + 2;

    cout<<"x = "<<x<<"  y = "<<y<<"   z = "<<z<<endl;
    x = 10, y = 3, z = 2;

    z = ++x + ++y;

    cout<<"x = "<<x<<"  y = "<<y<<"   z = "<<z<<endl;
    x = 10, y = 3, z = 2;

    z = x++ + ++y;

    cout<<"x = "<<x<<"  y = "<<y<<"   z = "<<z<<endl;
}