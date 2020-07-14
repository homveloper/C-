// 정적 지역 변수
#include <iostream>
using namespace std;

void sub(void);

int main()
{
	int i;
	
	for(i = 0;i < 5; i++)
		sub();

	return 0;
}

void sub(void)
{
	int auto_count = 0;
	static int static_count = 0;

	auto_count++;
	static_count++;
	cout << "auto_count=" << auto_count << endl;
	cout << "static_count=" << static_count << endl;
}
