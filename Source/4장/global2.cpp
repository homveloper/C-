
// 전역 변수의 초기값과 생존 기간
#include <iostream>
using namespace std;

int counter;	// 전역 변수

void set_counter(int i)
{
	counter = i;		// 직접 사용 가능
}

int main(void)
{
	cout << "counter=" << counter << endl;	

	counter = 100;		// 직접 사용 가능
	cout << "counter=" << counter << endl;	

	set_counter(20);		
	cout << "counter=" << counter << endl;	

	return 0;
}
