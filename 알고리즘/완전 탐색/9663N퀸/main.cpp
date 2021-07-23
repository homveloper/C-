#include <stdio.h>

int board[15][15] = {0};
int N;

#define EMPTY 0
#define INVALID -1
#define ON_BOARD 1

void put_queen(int y, int x)
{
    for (int i = 0; i < N; i++)
    {
        board[i][x] = INVALID;
    }

    for (int i = 0; i < N; i++)
    {
        board[y][i] = INVALID;
    }

    int dy, dx;

    for (dy = y, dx = x; dy > 0 && dx > 0; dy--, dx--);
    for (int i = dy, j = dx; i < N && j < N; i++, j++)
    {
        board[i][j] = INVALID;
    }

    for (dy = y, dx = x; dy > 0 && dx < N - 1; dy--, dx++)
        ;
    for (int i = dy, j = dx; i < N && j >= 0; i++, j--)
    {
        board[i][j] = INVALID;
    }

    board[y][x] = ON_BOARD;
}

void print_board()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%2d ", board[i][j]);
        }
        printf("\n");
    }
}

void clear_board()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j] = EMPTY;
        }
    }
}

bool hasEmpty()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (board[i][j] == EMPTY)
                return true;
        }
    }

    return false;
}

int main()
{
    scanf("%d", &N);

    int n;
    int count = 0;

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {

            clear_board();
            n = 0;

            put_queen(y,x);

            for (int dy = y+1; dy < N;)
            {
                for (int dx = 0; dx < N;)
                {
                    if (board[dy][dx] == EMPTY)
                    {
                        put_queen(dy, dx);
                        n++;
                    }

                    bool isValid=false;
                    for(int i=0; i<N; i++){
                        if(board[y+1][i] == EMPTY){
                            isValid = true;
                        }
                    }

                    if(isValid){
                                         
                    }else{
                        dy++;
                        dx++;
                    }
                }
            }

            if (n == N-1)
            {
                count++;
            }

            print_board();
            printf("\n");
        }
    }
    printf("%d", count);

    return 0;
}