#include <iostream>
using namespace std;

int money = 0;

void save(int amount);

void main(){

    int value;

    while(1){
        cout<<"얼마를 저축하시겠습니까?(종료는 -1) ";
        cin>>value;

        if(value == -1)
            break;

        save(value);
    }

    cout<<"종료"<<endl;
}

int draw(int amount){
    money -= amount;
    return money;
}

void save(int amount){
    money += amount;
    cout<<"총 저축액은"<<money<<"입니다."<<endl;
}