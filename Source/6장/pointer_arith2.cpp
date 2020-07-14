// 포인터의 증감 연산
#include <iostream>
using namespace std;

int main()
{
	int i = 10;
	int *pi = &i;
	
	cout << "i = " << i << " pi = " << pi << endl;
	(*pi)++;	
	cout << "i = " << i << " pi = " << pi << endl;
	*pi++;	
	cout << "i = " << i << " pi = " << pi << endl;
	
	return 0;
}
