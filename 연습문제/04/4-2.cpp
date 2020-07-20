#include <iostream>
using namespace std;

void main(){
    int a,b,c;
    cin>>a>>b>>c;

    int min;

    min = a < b ? a : b;
    min = min < c ? min : c;

    cout<<min<<endl; 
}