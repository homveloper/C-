// 변수 저장 유형 예제
#include <iostream>
using namespace std;
 
unsigned random_i(void);
double random_f(void);

extern unsigned call_count;	// 외부 참조 변수

int main()
{
	register int i;		// 레지스터 변수
	
	for(i = 0; i < 10; i++)
		cout << random_i() << " ";

	cout << endl;

	for(i = 0; i < 10; i++)
		cout << random_f() << " ";

	cout << "\n함수가 호출된 횟수= " << call_count;
	return 0;
}
