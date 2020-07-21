#include <iostream>
#include <cmath>
using namespace std;

int triple(int n)
{
    if (n <= 1)
        return 1;

    return pow(n, 3) + triple(n - 1);
}

void main()
{

    int n;

    while (1)
    {
        cin >> n;
        cout << triple(n) << endl;
    }
}