#include <iostream>
using namespace std;

int board[300][300] = {0};
int N;

void print()
{
    for(int y=0; y<N; y++)
    {
        for(int x=0; x<N; x++)
        {
            cout<<board[y][x]<<" ";
        }
        cout<<endl;
    }
}

void dfs(int count)
{
    if(count == 9)
    {
        print();
        exit(0);
    }

    int y = count / N;
    int x = count % N ;

    if(board[y][x] != 0){
        dfs(count+1);
    }else{
        
    }
}

int main()
{



    return 0;
}