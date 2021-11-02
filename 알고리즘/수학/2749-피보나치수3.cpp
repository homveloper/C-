/*
n이 10e18이므로 다이나믹 프로그래밍으로 풀수 없는 문제이다.
피사노 주기를 이용해서 피보나치수를 어떤 수 m으로 나눈 나머지가
어떤 주기를 이룬다. 즉, 일정한 패턴이 발생한다.
*/

#include <iostream>
using namespace std;

void solution(int *fibo)
{
    fibo[0]= 0;
    fibo[1]= 1;

    for(int i=2; i<=1500000; i++){
        fibo[i] = (fibo[i-1] + fibo[i-2])%1000000;
    }
}

int main()
{
    long long n;
    int fibo[1500001];
    cin>>n;

    solution(fibo);

    cout<<fibo[n%1500000]<<endl;
}