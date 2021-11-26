#include <iostream>
using namespace std;

int main(){
    int N;
    int result = 0;

    cin>>N;

    while(N>0){
        if(N % 5 == 0){
            result += N / 5;
            N = 0;
            break;
        }

        N -= 3;
        result++;
    }

    if(N == 0)
        cout<<result<<endl;
    else
        cout<<-1<<endl;
}