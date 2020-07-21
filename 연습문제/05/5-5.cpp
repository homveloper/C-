#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int randInt(int a, int b){
    return rand() % (b+1-a) + a; 
}


void main(){
    srand(time(NULL));
    int a,b;

    while(1){
        cin>>a>>b;
        cout<<randInt(a,b)<<endl;
    }
}