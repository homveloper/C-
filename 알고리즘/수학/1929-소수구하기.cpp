#include <iostream>

void solution(int *prime_check,const int size)
{
    for(int i=2; i<=size; i++){
        prime_check[i] = 1;
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

void print(int *prime_check,const int start, const int end){
    for(int i=start; i<=end; i++){
        if(prime_check[i] == 1){
            printf("%d\n", i);
        }
    }
}

int main()
{
    int M,N;
    int prime_check[1000001];

    scanf("%d %d",&M,&N);

    solution(prime_check, N);
    print(prime_check, M, N);
}