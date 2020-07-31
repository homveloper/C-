#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    void print(){
        cout<<x<<", "<<y<<endl;
    }

    void setCordinate(int x, int y){
        this->x = x;
        this->y = y;
    }

    void clear(){
        x = 0;
        y = 0;
    }
};