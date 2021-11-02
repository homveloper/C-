#include <iostream>
using namespace std;

int main(){
    int i=1;
    int X;

    cin>>X;

    while(X>i){
        X -= i;
        i++;
    }

    if(i%2 == 1)
        cout<<i+1-X << "/"<<X<<endl;
    else
        cout<<X << "/"<<i+1-X<<endl;
}