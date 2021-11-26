#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int N, temp;
    vector<int> trees;

    cin>>N;

    for(int i=0; i<N; i++){
        cin>>temp;
        trees.push_back(temp);
    }

    // 묘목의 성장 일수를 정렬
    sort(trees.begin(), trees.end(),greater<int>());

    // 각 묘목을 심을 때 마다 일자를 더해준다.
    for(int i=0; i<N; i++){
        trees[i] += (i+1);
    }

    // 가장 오래 걸리는 묘목이 성장하고 다음날 이장님을 초대하면 된다.
    int day = *max_element(trees.begin(), trees.end());
    cout<<day+1<<endl;
}