#include <iostream>
using namespace std;

void swap(int x, int y){	//인자를 값으로 받음
	
    int temp = x;
	x = y;
	y = temp;
}





void swap2(int *x, int *y){	//인자를 포인터로 받음
	int temp = *x;
	*x = *y;
	*y = temp;
}

void main(){
	int a = 100, b = 200;

	cout<<a<<" "<<b<<endl;
	swap2(&a,&b);
	cout<<a<<" "<<b<<endl;
}