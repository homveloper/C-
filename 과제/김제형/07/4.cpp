#include <iostream>
#include <algorithm>
using namespace std;

void getSumDiff(double A[], double *AVERAGE, double *MAX, double *SUM)
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*MAX = max(*MAX, *(A + i));
		*SUM = *SUM + *(A + i);
	}
	*AVERAGE = *SUM / 5;
}

void swap(int *i, int *j);

int main()
{
	int a = 5, b= 3;

	swap(&a,&b);

	cout<<a<<" "<<b<<endl;
}

void swap(int *i, int *j){
	int temp = *i;
	*i = *j;
	*j = temp;
}
