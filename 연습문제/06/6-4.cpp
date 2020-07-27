#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define ROW 3
const int COL = 3;

void print(int A[][3]);

void main(){
    int A[ROW][COL];
    int B[ROW][COL];
    int C[ROW][COL];

    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            A[i][j] = rand() % 2;
            B[i][j] = rand() % 2;
            C[i][j] = 0;
        }
    }

    print(A);
    print(B);

    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            for(int k=0; k<ROW; k++){
                C[i][j] += A[i][k] + B[k][j];
            }
        }
    }

    print(C);
}

void print(int A[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<A[i][j];

            if(j != 2)
                cout<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
}