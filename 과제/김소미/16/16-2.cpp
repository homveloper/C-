#include <iostream>
#include <stack>
#include <exception>
using namespace std;










template <typename T>
T max(T x, T y){
    return x > y ? x : y;
};

template <typename T>
void print_array(T[] a, int n){
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    
    cout<<endl;
};

template <>
void print_array(char[] a, int n){
    cout<<a<<endl;
}

int main()
{
    print_array("Hello");
}

