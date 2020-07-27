#include <iostream>
using namespace std;

int main()
{
	char *pc; 
	int *pi;
	double *pd;
	
	pc = (char *)10000;			
	pi = (int *)10000;			
	pd = (double *)10000;			
	
    cout << "증가 전 pc = " << (void *)pc << "pi = " << pi << "pd = " << pd << endl;
	
	pc++;
	pi++;
	pd++;
	cout << "증가 후 pc = " <<  (void *)pc << "pi = " << pi << "pd = " << pd << endl;
	
	return 0;
}