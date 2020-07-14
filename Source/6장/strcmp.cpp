// strcmp() 함수
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s1[80];	// 첫번째 단어를 저장할 문자배열
	char s2[80];	// 두번째 단어를 저장할 문자배열
	int result;

	cout << "첫번째 단어를 입력하시오:";
	cin >> s1;
	cout << "두번째 단어를 입력하시오:";
	cin >> s2;

	result = strcmp(s1, s2);
	if( result < 0 )
		cout << s1 << "이 " << s2 << "보다 앞에 있습니다." << endl;
	else if( result == 0 )
		cout << s1 << "이 " << s2 << "와 같습니다." << endl;
	else 
		cout << s1 << "이 " << s2 << "보다 뒤에 있습니다." << endl;
	return 0;
}
