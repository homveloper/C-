
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

/*
 * Complete the 'minMoves' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER startRow
 *  3. INTEGER startCol
 *  4. INTEGER endRow
 *  5. INTEGER endCol
 */
 
# define MAX 150
 
bool visited[MAX][MAX];

int dy[] = {-2,-1,1,2,2,1,-1,-2};
int dx[] = {1,2,2,1,-1,-2,-2,-1};

int minMoves(int n, int startRow, int startCol, int endRow, int endCol) {
    
    memset(visited, false, sizeof(visited));
    
    // y, x, count
    queue<pair<pair<int,int>, int>> Q;
    Q.push(make_pair(make_pair(startRow, startCol), 0));
    visited[startRow][startCol] = true;
    
    while(Q.empty() == 0)
    {
        int y = Q.front().first.first;
        int x = Q.front().first.second;
        int cnt = Q.front().second;
        
        Q.pop();

        cout<<y<<", "<<x<<", "<<cnt<<endl;
        
        if(y == endRow && x == endCol)
        {
            return cnt;
        }
        
        for(int i=0; i<8; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if( nx >= 0 && ny >= 0 && nx < n && ny < n)
            {
                if(!visited[ny][nx])
                {
                    visited[ny][nx] = true;
                    
                    Q.push(make_pair(make_pair(ny, nx), cnt+1));
                }
            }
        }
    }
    
    return 0;
}

void main()
{
    int N, startRow, starCol, endRow,endCol;

    cin>>N>>startRow>>starCol>>endRow>>endCol;

    cout<<minMoves(N,startRow,starCol,endRow,endCol)<<endl;
}