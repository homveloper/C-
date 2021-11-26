#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int fibo(vector<int> &times)
{
    if(times.size()<=1){
        return times[0]; 
    }

    int fibo_sum = 0;

    int result = 0;
    int prev = times[0];
    for(int i=1; i<=times.size(); i++){
        int temp = times[i];
        result += prev;
        prev = temp;
        fibo_sum += result;
    }

    return fibo_sum;
}

int main(){
    int N, temp;
    vector<int> times;

    cin>>N;

    for(int i=0; i<N; i++){
        cin>>temp;
        times.push_back(temp);
    }

    // 각 인원이 빠르게 돈을 인출하려면
    // 인출 하는데 걸리는 시간이 짧은 사람
    // 먼저 인출을 해야한다. 
    sort(times.begin(),times.end());

    // 그다음 마지막 사람이 인출하는데 걸리는
    // 시간은 피보나치를 이용하면 된다.
    cout<<fibo(times)<<endl;
}