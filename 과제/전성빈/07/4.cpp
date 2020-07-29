#include <iostream>
using namespace std;

void getSumDiff(double A[], double AVERAGE, double MAX, double SUM){
	int i;
	while (i<5){
		for (i=0;i<5;i++){
			MAX = max(MAX,*(A+i));
			SUM = SUM + *(A+i);
		}
		AVERAGE = SUM/5;
		cout<<AVERAGE<<endl;
		cout<<MAX<<endl;
		cout<<SUM<<endl;
	}
}

int main(){
	double A[5]={1,2,3,4,5};
	double AVERAGE;
	double MAX=0;
	double SUM;
	
	getSumDiff(A,AVERAGE,MAX,SUM);
}
