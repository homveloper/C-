#include <iostream>
#include "SList.h"
#include "Node.h"
using namespace std;

void displayMenu();
int input(string); 

void main(){
    

    SList sList;
    int menu;
    while(true){
        displayMenu();
        menu = input("입력 : ");

        switch (menu)
        {
        case 1:{
            int value = input("입력 : ");
            sList.insertFront(value);            
            break;
        }
        case 2:{
            int target = input("검색 : ");
            Node*p = sList.search(target);

            if(p != nullptr){
                int value = input("입력 : ");
                
                sList.insertAfter(value,p);
            }
        }
        
        default:
            break;
        }
    }
}

void displayMenu(){
    cout<<"1. 맨 앞에 추가"<<endl;
    cout<<"2. 특정 노드 뒤에 추가"<<endl;
    cout<<"3. 맨 앞 제거"<<endl;
    cout<<"4. 특정 노드 뒤에 제거"<<endl;
}

int input(string message){
    int value;
    cout<<message;
    cin>>value;

    return value;
}