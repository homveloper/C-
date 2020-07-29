#include <iostream>
using namespace std;

int main(){
	int i = 1000;
	double j = 2000;
	int *p = &i;
	double *q = &j;

	cout<<"1 : "<<p+3<<endl;
	cout<<"2 : "<<p-2<<endl;
	cout<<"3 : "<<q+5<<endl;
	cout<<"4 : "<<q-1<<endl;
}
