#include <iostream>

#define MAX 9
int board[MAX][MAX];
bool row[MAX][MAX];
bool col[MAX][MAX];
bool square[MAX][MAX];

void print(){
    for(int y=0; y<MAX; y++){
        for(int x=0; x<MAX; x++){
            std::cout<<board[y][x]<<" ";
        }
        std::cout<<"\n";
    }
}

void dfs(int count){

    // count = 9 x 9
    if(count == 81){
        print();
        exit(0);
    }

    // count to coordinate
    int y = count / 9;
    int x = count % 9 ;


    if(board[y][x] != 0){
        dfs(count+1);
    }else{
        for(int i=1; i<=MAX; i++){
            if(row[y][i] == false && 
                col[x][i] == false &&
                square[(y/3)*3 + (x/3)][i] == false)
            {
                row[y][i] == true;
                col[x][i] == true;
                square[(y/3)*3 + (x/3)][i] = true;
                board[y][x] = i;

                dfs(count+1);

                board[y][x] = 0;
                row[y][i] == false;
                col[x][i] == false;
                square[(y/3)*3 + (x/3)][i] = false;
            }
        }
    }
}


int main(){

    for(int y=0; y<MAX; y++){
        for(int x=0; x<MAX; x++){
            std::cin>>board[y][x];

            if(board[y][x]){
                col[x][board[y][x]] = true;
                row[y][board[y][x]] = true;
                square[(y/3) * 3 + (x/3)][board[y][x]] = true;
            }
        }
    }

    // print();

    dfs(0);

    return 0;
}