#include <stdio.h>


bool is666(int value){
    int count = 0;
    int isIterative = false;

    for(;value>0; value /= 10) {
        if (value % 10 == 6){
            count++;
            isIterative = true;
        }else{
            if (isIterative){
                count = 0;
                isIterative = false;
            }
        }

        if(count == 3)
            break;
    }
    return count == 3;
}

int main(){

    int N;
    scanf("%d", &N);

    int n = 0;

    for(int i= 666;; i++){
        if(is666(i)){
            n++;
        }

        if(n == N){
            printf("%d",i);
            break;
        }
    }

    return 0;
}