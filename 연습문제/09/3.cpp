#include <iostream>
using namespace std;

class MyArray{
    int *ptr;
    int size;
    int top;

public:

    void init(){
        size = 5;
        ptr = new int[size];
        top = 0;
    }

    void print(){
        for(int i=0; i<top; i++){
            cout<<ptr[i]<<" ";
        }

        cout<<endl;
    }

    int pop(){
    
        if(top > -1){

        int value = *(ptr+top-1);
        
        return value;
        }
    }

    void append(int value){
        if(size > top){
            ptr[top] = value;
            top++;
        }else{
            int *temp = new int[size];

            for(int i=0; i<size; i++){
                *(temp + i) = *(ptr + i);
            }
            
            delete[] ptr;

            ptr = new int[size * 2];

            for(int i=0; i<size; i++){
                *(ptr + i) = *(temp + i);
            }

            *(ptr+top) = value;
            top++;
            size *= 2;
        }
    }
};

#include <cstdlib>
#include <ctime>
using namespace std;

void main(){
    MyArray a1;

    a1.init();
    for(int i=0; i<5; i++){
        a1.append(rand() % 10);
    }
    a1.print();

    a1.append(10);

    a1.print();
}