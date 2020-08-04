#include <iostream>
using namespace std;

class Rectangle
{
    public:
        int width;
        int height; 
        int calArea(){
            return width*height;
        }
};

int main(){
    Rectangle a;
    a.width = 10;
    a.height = 10;
    int result = a.calArea();
    cout<<result;
}