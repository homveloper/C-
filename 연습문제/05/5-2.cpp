#include <iostream>
using namespace std;

int getParkingPee(int hour);

void main()
{
    int hour;

    while (1)
    {
        cin >> hour;
        cout << getParkingPee(hour) << endl;
    }
}

int getParkingPee(int hour)
{
    int price = 0;

    if(hour>=24){
        price += (hour / 24) * 10000;
        hour %= 24;

        if (hour >= 5) {
            price += 10000;
        }else{
            price += hour * 2000;
        }
    }else{
        if(hour >= 6){
            price += 10000;
        }else if(hour > 2){
            price += 3000 + (hour-2) * 2000;
        }else if(hour >0){
            price += 3000;
        }
    }

    return price;
}