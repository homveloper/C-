#include <iostream>
using namespace std;

int main(){
    int P, N, M, cnt;

    cin>>P;

    for(int i=0; i<P; i++){
        cin>>N>>M;

        cnt = 0;

        int a= 1,b=1;
        while(1){
            int tmp = (a +b) % M;
            a = b;
            b = tmp;

            cnt++;

            if(a == 1 && b== 1)
                break;
        }

        cout<<N<<" "<<cnt<<endl;
    }
}