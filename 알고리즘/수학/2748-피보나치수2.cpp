#include <iostream>
using namespace std;

long long solution(long long *dp, int n){
    if(n <= 1)
        return n;
    
    if(dp[n]){
        return dp[n];
    }

    dp[n] = solution(dp, n-1) + solution(dp, n-2); 
    return dp[n];
}

int main(){
    int n;
    long long dp[91]={0};

    cin>>n;
 
    cout<<solution(dp, n);
}