#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void main(){
    srand(time(NULL));

    const int NUMBER = 10;
    int frequency[NUMBER] = {0};

    for(int i=0; i<100; i++)
        ++frequency[rand() % NUMBER];


    cout<<"=========="<<endl;
    for(int i=0; i<NUMBER; i++)
        cout<<i<<"\t"<<frequency[i]<<endl;
    cout<<"=========="<<endl;
}