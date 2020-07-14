#include <iostream>
#include <climits>
using namespace std;

int main(){
    short s = SHRT_MAX;
    unsigned short us = USHRT_MAX;

    s = s + 1;
    cout<<"s = "<< s<<endl;

    us = us + 1;
    printf("%d\n",us);
}