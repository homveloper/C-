#include <iostream>
using namespace std;
#include <ctime>


class MyArray
{
public:
    int size;
    double ptr;
    void create()
    {
        int *A;
        for (int i = 0; i < size ; i++)
        {
            *(A + i) = rand() % 10;
        }
    }
    void append()
    {
        //정수추가
        double *p;
    }
};

int main()
{
    srand(time(NULL));
    MyArray A;
    A.size = 5;
    A = {0};
    A.create();
    cout<<A[1];
}
