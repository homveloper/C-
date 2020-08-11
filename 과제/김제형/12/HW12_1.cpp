#include <iostream>
using namespace std;

class Date
{
private:
    int year, month, day;

public:
    Date()
    {
        year = 0;
        month =0;
        day =0;
    }

    Date(int Y, int M, int D)
    {
        year = Y;
        month = M;
        day = D;
    };

    Date operator++(int)
    {
        day += 1;
        if (month == 2 || month == 4 || month == 6 ||month ==  9 || month == 11)
        {
            day > 30 ? (increasemonth()) : NULL;
        }
        else if (month == 1 || 3 || 5 || 7 || 8 || 10 || 12)
        {
            day > 31 ? (increasemonth()) : none();
        }

        if (month == 13)
        {
            increaseyear();
        }
        return *this;
    }

    // 전위 증감연산자
    Date operator--(){

        // 코드를

        return *this;
    }

    // 후위 증감연산자
    Date operator--(int)
    {
        Date date(*this);

        day -= 1;
        if (month == 1 || 3 || 5 || 7 || 8 || 10 || 12)
        {
            day < 1 ? decreasemonth31() : none();
        }
        else if (month == 2 || 4 || 6 || 9 || 11)
        {
            day < 1 ? decreasemonth30() : none();
        }

        if (month == 0)
        {
            decreaseyear();
        }

        return date;
    }
    friend ostream& operator<<(ostream& os, const Date &a){
        os <<"year : "<<a.year <<endl<<"month : "<<a.month<<endl<< "day : "<<a.day<<endl;
        return os;
    }
    void none()
    {
        ;
    }
    Date& GetDate()
    {
        return *this;
    }

    void SetDate(int YEAR, int MONTH, int DAY)
    {
        year = YEAR;
        month = MONTH;
        day = DAY;
    }

    void increasemonth()
    {
        day = 1;
        month += 1;
    }

    void increaseyear()
    {
        month = 1;
        year += 1;
    }

    void decreasemonth31()
    {
        day = 31;
        month -= 1;
    }

    void decreasemonth30()
    {
        day = 30;
        month -= 1;
    }

    void decreaseyear()
    {
        day = 31;
        month = 12;
        year -= 1;
    }
};

int main()
{
    Date a(2000, 1, 31);
    a.SetDate(2021, 2, 28);
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
    a.SetDate(2020,1,1);
    a--;
    cout<<a<<endl;
}