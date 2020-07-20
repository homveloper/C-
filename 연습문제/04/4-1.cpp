#include <iostream>
#include <cmath>
using namespace std;

void main()
{
    int x1, y1, x2, y2, x3, y3;

    cout << "X1, y1 : ";
    cin >> x1 >> y1;
    cout << "x2, y2 : ";
    cin >> x2 >> y2;
    cout << "x3, y3 : ";
    cin >> x3 >> y3;

    int a = sqrt(pow((x1 - x2), 2) + pow(y1 - y2, 2));
    int b = sqrt(pow((x2 - x3), 2) + pow(y2 - y3, 2));
    int c = sqrt(pow((x3 - x1), 2) + pow(y3 - y1, 2));

    bool isTriangle = false;

    double slopeA = (double)(x2 - x1) / (y2 - y1);
    double slopeB = (double)(x3 - x2) / (y3 - y2);
    double slopeC = (double)(x1 - x3) / (y1 - y3);

    if (slopeA == slopeB && slopeA == slopeC && slopeB == slopeC)
        isTriangle = false;
    else
    {
        if (a < (b + c))
            isTriangle = true;
        else if (b < (a + c))
            isTriangle = true;
        else if (c < (a + b))
            isTriangle = true;
    }

    cout << isTriangle << endl;
}