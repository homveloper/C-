#include <iostream>
using namespace std;

// x와 y는 매개 변수로서 함수 호출시 전달되는 인자를 저장한다. 
int add(int x, int y)
{
	return (x + y);
}

int main(void)
{
	// 2와 3이 add()의 인자가 된다. 
	add(2, 3);  

	// 5와 6이 add()의 인자가 된다. 
	add(5, 6);  

	return 0;
}
