#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(){
    srand(time(NULL));

    int random = rand();    // rand()의 범위는 0 ~ 32767이다. 
                            // rand() % n 은 0 ~ n-1 까지의 수를 반환합니다.

    cout<<random<<endl;
}