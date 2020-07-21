#include <iostream>
using namespace std;

void printMenu(){
    cout<<"1. 짜장면"<<endl;
    cout<<"2. 짬뽕"<<endl;
    cout<<"3. 볶음밥"<<endl;
    cout<<"4. 탕수육"<<endl;
    cout<<"원하는 메뉴를 선택하세요 : ";
}

int getMenuNumber(){
    int n;

    printMenu();
    cin>>n;
    while(n<1 || n>4){
        printMenu();
        cin>>n;
    }

    return n;
}

void main(){
    getMenuNumber();
}