#include <iostream>
#include <vector>

#define MAX 5
int input[5] = {1,2,3,4,5};
bool visited[MAX];  //방문한 인덱스를 저장

// 백트래킹과 순열 값을 저장할 배열
std::vector<int> permutation;    

void print(){
    for(int i=0; i<permutation.size(); i++){
        std::cout<<permutation[i]<<" ";
    }
    std::cout<<'\n';
}

// dfs
// count : 현재 permutation 배열의 원소 갯수
// n : 출력할 원소의 수

void solution(int count, int n){
    if(count == n){
        print();
        return;
    }

    for(int i=0; i<MAX; i++){
        if(visited[i]) continue;

        // 백트래킹 
        visited[i] = true;
        permutation.push_back(input[i]);
        solution(count + 1, n);
        permutation.pop_back();
        visited[i] = false;
    }
}

int main(){

    solution(0,3);

    return 0;
}