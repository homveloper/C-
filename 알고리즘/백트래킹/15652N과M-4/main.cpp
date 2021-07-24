#include <iostream>
#include <vector>

#define MAX 8
int input[MAX];
bool visited[MAX];  //방문한 인덱스를 저장
int N, M;

// 백트래킹과 순열 값을 저장할 배열
std::vector<int> vec;    

bool is_ascending(const std::vector<int>& v){
    for(int i=0; i<v.size()-1; i++){
        if(v[i] > v[i+1])
            return false;
    }

    return true;
}

void print(){
    for(int i=0; i<vec.size(); i++){
        std::cout<<vec[i]<<" ";
    }
    std::cout<<'\n';
}

// dfs
// count : 현재 permutation 배열의 원소 갯수
// n : 출력할 원소의 수

void permutation(int count, int n){
    if(count == n){
        if(is_ascending(vec))
            print();
        return;
    }

    for(int i=0; i<N; i++){
        // if(visited[i]) continue;

        // 백트래킹 
        // visited[i] = true;
        vec.push_back(input[i]);
        permutation(count + 1, n);
        vec.pop_back();
        // visited[i] = false;
    }
}

int main(){

    std::cin>>N>>M;

    for(int i=0; i<N; i++){
        input[i] = i+1;
    }

    permutation(0,M);

    return 0;
}