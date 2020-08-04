// 행렬 클래스
/*
    void print()

    void add(const Matrix m)
    
    void difference(const Matrix m)
    
    void multiply(const Matrix m)

    Maxtrix(int n)  // n x n 행렬이 생성되며 그 값은 랜덤

    Matrix(Matrix &m);
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Matrix{
    int **matrix;
    int size;
public:
    Matrix(int n = 2){

        // 2차원 동적 배열 생성
        matrix = new int*[n];           // 행렬의 행
        size = n;

        for(int i=0; i<size; i++){
            matrix[i] = new int[n];     // 행렬의 열
        }

        // 2차원 동적 배열 초기화
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                matrix[i][j] = rand()%10;
            }
        }
    }

    Matrix(Matrix &m){
        size = m.size;
        matrix = new int*[size];

        for(int i=0; i<size; i++){
            matrix[i] = new int[size];

            for(int j=0; j<size; j++){
                matrix[i][j] = m.matrix[i][j];
            }
        }
    }

    ~Matrix(){
        for(int i=0; i<size; i++)
            delete matrix[i];
             
        delete[] matrix;
    }

    void add(const Matrix m){
        for(int i=0; i<size; i++)
            for(int j=0; j<size; j++)
                matrix[i][j] += m.matrix[i][j];
    }

    
    void difference(const Matrix m){
        for(int i=0; i<size; i++)
            for(int j=0; j<size; j++)
                matrix[i][j] -= m.matrix[i][j];
    }

    void multiply(const Matrix m){

        Matrix temp(*this);

        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                
                int sum = 0;

                for(int k=0; k<size; k++){
                    sum += matrix[i][k] * m.matrix[k][j];
                }

                temp.matrix[i][j] = sum;
            }
        }

        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                matrix[i][j] = temp.matrix[i][j];
            }
        }
    }

    void print(){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    int** getMatrix(){
        return matrix;
    }

    int getSize(){
        return size;
    }
};

void main(){
    srand(time(NULL));

    Matrix m1(2), m2(2);

    m1.print();
    m2.print();

    m1.multiply(m2);
    m1.print();
}