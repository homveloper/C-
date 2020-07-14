#include <iostream>
using namespace std;
static void f1()
{
	cout << "f1()이 호출되었습니다.\n";
}

void f2()
{
	f1();
	cout << "f2()가 호출되었습니다.\n";
}
