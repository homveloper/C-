#include <stdio.h>

int main() {

    int M, N;
    char board[50][50];    
    int min = __INT_MAX__;

    scanf("%d %d", &N, &M);

    for(int i=0; i<N; i++){
        scanf("%s", board[i]);
    }

    // (x,y) 8x8 크기 체스판의 첫 시작 좌표
    for(int y=0; y<N-7; y++) {
        for(int x=0; x<M-7; x++){
            
            int countW=0;
            int countB=0;

            // 1. 첫번째 칸이 흰색이면, ny + nx가 짝수라면 board[ny+y][nx+x] = 흰색  그렇지 않으면 검은색
            //              검정이면, ny + nx가 짝수라면 board[ny+y][nx+x] = 검은색  그렇지 않으면 흰색
            for(int ny= 0; ny<8; ny++){
                for(int nx = 0; nx<8; nx++){
                    
                    // 짝수
                    if ((ny + nx) % 2 == 0) {
                        if(board[ny+y][nx+x] == 'B')
                            countW++;
                        else
                            countB++;
                    }
                    // 홀수
                    else {
                        if(board[ny+y][nx+x] == 'B')
                            countB++;
                        else
                            countW++;
                    }
                }
            }

            min = min > countW ? countW : min;
            min = min > countB ? countB : min;
        }
    }

    printf("%d\n", min);

    return 0;
}