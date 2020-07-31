#include <iostream>
using namespace std;

class Point
{
private:
    int x=0;
    int y=0;
    int X=0;
    int Y=0;

public:
    void position(int x, int y){
        while (Y!=y){
            cout<<endl;
            Y++;
        }
        while (X!=x){
            cout<<" ";
            X++;
        }
        cout<<"a";
    }
};

void main()
{
    Point p1;
    p1.position(3,3);
}