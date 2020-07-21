#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return true;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool isPrime2(int n, int i){
    if(n==1)
        return true;

    if(i==1)
        return true;

    if(n % i == 0)
        return false;

    return isPrime2(n, i-1);
}

void main()
{
    for (int i = 1; i < 20; i++)
        cout << i << " : " << (isPrime(i) == true ? "true" : "false" )<< endl;

    for(int i=3; i<20; i++)
        cout << i << " : " << (isPrime2(i,i/2) == true ? "true" : "false" )<< endl;
}
