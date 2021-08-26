#include <vector>
#include <iostream>

#define MAX 15
int N;
int result = 0;

// index : 행
// value : 열
int board[MAX];

bool isValid(int row)
{
    for (int i = 0; i < row; i++)
    {
        if (board[i] == board[row] || // 같은 라인에 있거나
            (abs(board[row] - board[i]) == (row - i)))  // 대각선 상에 있는지
        { 
            return false;
        }
    }

    return true;
}

// 1. DFS 수행
void dfs(int row)
{

    // 1-1. N번째 퀸 까지 놓으면 1증가
    if (row == N)
    {
        result++;
    }
    else
    {
        // 0번째 열 부터 N-1번째 열 까지 탐색
        for (int i = 0; i < N; i++)
        {
            board[row] = i;
            // 2. 유망한 노드 검토
            if (isValid(row)){
                // 3. 서브 트리 이동
                dfs(row+1);
            }
        }
    }
}

int main()
{

    std::cin >> N;

    dfs(0);

    std::cout<<result;

    return 0;
}