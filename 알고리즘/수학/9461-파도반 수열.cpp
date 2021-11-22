#include <iostream>
using namespace std;

long long arr[150];

int main(){
    int T, N;
    cin>>T;

    for(int i=0; i<T; i++){
        cin>>N;
        arr[0] = arr[1] = arr[2] = 1;

        for(int j=3; j<N; j++){
            arr[j] = arr[j-2] + arr[j-3];
        }

        cout<<arr[N-1]<<endl;
    }
}