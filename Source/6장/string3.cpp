// 문자열의 길이를 구하는 프로그램
#include <iostream>
using namespace std;

int main()
{
	char str[30] = "C++ language is easy";
	int i = 0;
	
	while(str[i] != 0)
		i++;
	cout << "문자열 "<< str << "의 길이는 " << i << "입니다." << endl;

	return 0;
}
