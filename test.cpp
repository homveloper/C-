#include <iostream>
using namespace std;

int main(){

    int a = 5, b = 3, c = 7;
    int min, max;

    min = a;
    max = a;

    if(a >= b){
        min = b;
    }else if(b >= c){
        min = c;
    }
    
    cout<<min<<endl;
    cout<<max<<endl;
}