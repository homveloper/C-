#include <iostream>
#include <ostream>

using namespace std;

class Date{
private:
    int year;
    int month;
    int day;

public:
    Date(){
        Date(2000,1,1);
    }

    Date(int year){
        Date(year,1,1);
    }

    Date(int year, int month){
        Date(year,month,1);
    }

    Date(int year, int month, int day){
        this->year = year;
        this->month = month;
        this->day = day;
    }

    Date(const Date& date){
        this->year = date.year;
        this->month = date.month;
        this->day = date.day;
    }

    friend ostream& operator <<(ostream& os, const Date& date);

    const Date operator ++ (int){
        const Date date(year,month,day);

        bool isLeapYear = ((year % 4)== 0) && ((year % 100) != 0 || (year % 400) == 0);

        day++;

        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day > 31){
                day = 1;
                month++;
            }
            break;
        case 2:
            if(isLeapYear){
                if(day > 29){
                    day = 1;
                    month++;
                }
            }else{
                if(day > 28){
                    day = 1; 
                    month++;
                }
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if(day > 30){
                day = 1;
                month++;
            }
            break; 
        default:
            break;
        }

        if(month > 12){
            month = 1;
            year++;
        }

        return date;
    }

    const Date operator -- (int){
        const Date date(year,month,day);

        bool isLeapYear = ((year % 4)== 0) && ((year % 100) != 0 || (year % 400) == 0);

        day--;

        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day < 1){
                day = 31;
                month--;
            }
            break;
        case 2:
            if(isLeapYear){
                if(day < 1){
                    day = 29;
                    month--;
                }
            }else{
                if(day < 1){
                    day = 28; 
                    month--;
                }
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if(day < 1){
                day = 30;
                month--;
            }
            break; 
        default:
            break;
        }

        if(month < 1){
            month = 12;
            year--;
        }

        return date;
    }
};

ostream& operator <<(ostream& os, const Date& date){
    return os<<date.year<<"년 "<<date.month<<"월 "<<date.day<<"일";
}

void main(){
    Date date(2020,1,1);

    date++;
    cout<<date<<endl;

    date--;
    cout<<date<<endl;

    date--;
    cout<<date<<endl;
}