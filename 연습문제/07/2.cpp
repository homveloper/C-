#include <iostream>
using namespace std;

void main(){
    // 1. 1012
    // 2. 992
    // 3. 2040
    // 4. 1992

    int *p = (int *)1000;
    double *q = (double *)2000;

    cout<<p<<endl;
    cout<<q<<endl;


    cout<<p+3<<endl;

    p = (int *)1000;
    cout<<p-2<<endl;

    cout<<q+5<<endl;
    
    q = (double *)2000;
    cout<<q-1<<endl;
}