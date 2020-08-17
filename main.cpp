#include "stack.h"
#include <iostream>
using namespace std;



enum MENU {PUSH, POP, PRINT};

void printMenu(){
    cout<<"=========="<<endl;
    cout<<"1. push"<<endl;
    cout<<"2. pop"<<endl;
    cout<<"3. print"<<endl;
    cout<<"=========="<<endl;
}

template <typename T>
T getValue(const char* message){
    T value;
    
    cout<<message;
    cin>>value;

    return value;
}

void main(){
    Stack<int> stack(2);

    while(true){
        printMenu();
        int menu = getValue<int>("입력 : ") - 1;
      
        system("cls");

        switch (menu)
        {
        case MENU::PUSH:
            stack.push(getValue<int>("데이터 : "));
            break;
        case MENU::POP:
            stack.pop();
            break;
        case MENU::PRINT:
            stack.print();
            break;
        default:
            break;
        }
    }
}