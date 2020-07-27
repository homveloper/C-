#include <iostream>
using namespace std;

int main()
{
    int grade[3][5]; //2차원 배열 선언
    int value = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            grade[i][j] = value++;
            cout << grade[i][j] << " ";
        }

        cout << endl;
    }


    int grade[5] = {1,2,3,4,5}

    int grade[3][5] = {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}
    }

    int grade[2][3][5] = {
        {
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5}
        },
        {
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5}
        }
    }
}