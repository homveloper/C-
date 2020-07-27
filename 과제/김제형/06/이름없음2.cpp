#include <iostream>
using namespace std;

int add(int a[],int b[],int size){
	cout<<"enter the size : ";
	cin>>size;
	
	for (int i=0;i<size;i++){
		cout<<"enter the a["<<i<<"] value : ";
		cin>>a[i];
		cout<<"enter the b["<<i<<"] value : ";
		cin>>b[i];
		a[i]=a[i]*b[i];
		cout<<"a["<<i<<"] value "<<a[i]<<endl<<endl;
	}
}

int main(){
	int size=0;
	int a[size],b[size];
	add(a,b,size);	
	return 1;
}
