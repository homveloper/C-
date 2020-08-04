class Rectangle{
    int height;
    int width;

public:

    void init(int height, int width){
        this->height = height;
        this->width = width;
    }

    int calArea(){
        return height * width;
    }
};

#include <iostream>
using namespace std;

void main(){
    Rectangle r1;

    r1.init(10,20);

    cout<<"r1의 넓이 : "<<r1.calArea()<<endl;
}