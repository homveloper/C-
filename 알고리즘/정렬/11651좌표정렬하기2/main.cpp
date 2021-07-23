#include <utility>
#include <algorithm>
#include <stdio.h>
std::pair<int, int> coordinate[100000];

int main(){
    int N;

    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d %d", &coordinate[i].second, &coordinate[i].first);
    
    sort(coordinate, coordinate+N);

    for(int i=0; i<N; i++)
        printf("%d %d\n",coordinate[i].second, coordinate[i].first);
}