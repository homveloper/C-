#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

void solution(vector<int> &prime_check,const int size)
{
    for(int i=2; i<=size; i++){
        prime_check[i] = i;
    }


    for(int i=2; i<=size; i++)
    {
        if(prime_check[i] == 0) continue;

        for(int j=i*2; j<=size; j+= i)
        {
            prime_check[j] = 0;
        }
    }
}

int main(){
    int M,N;
    cin>>M>>N;

    vector<int> prime_check(10001);

    solution(prime_check, N);

    if(M==1)
        M++;


    int sum = accumulate(prime_check.begin() + M , prime_check.begin() + N + 1, 0);

    if(sum){
        cout<<sum<<endl;
    }else{
        cout<<-1<<endl;
        exit(0);
    }
    
    int min = 10001;

    for(int i=M; i<=N; i++){
        if(prime_check[i] != 0 && min > prime_check[i]){
            min = prime_check[i];
        }
    }

    cout<<min<<endl;
}
