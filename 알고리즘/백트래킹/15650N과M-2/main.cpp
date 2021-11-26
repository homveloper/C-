#include <vector>
#include <iostream>

#define MAX 8
int input[MAX];
bool visited[MAX];
std::vector<int> vec;

int N,M;

bool is_ascending(const std::vector<int>& v){
    for(int i=0; i<v.size()-1; i++){
        if(v[i] > v[i+1])
            return false;
    }

    return true;
}

void permutation(int count, int n){

    if(count == n){
        if(is_ascending(vec)){
            for(int i=0; i<vec.size(); i++){
                std::cout<<vec[i]<<" ";
            }
            std::cout<<"\n";
        }
        return;
    }

    for(int i=0; i<N; i++){
        if (visited[i]) continue;

        visited[i] = true;
        vec.push_back(input[i]);
        permutation(count+1, n);
        vec.pop_back();
        visited[i] = false;
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