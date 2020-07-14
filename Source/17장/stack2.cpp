... 	// 앞의 스택 클래스 포함
int main()
{
	Stack<char> s;  // 크기가 100인 문자형 스택
	string str = "madamimadam";

	for(int i=0;i<str.length(); i++)
		s.push(str[i]);

	for(int i=0;i<str.length(); i++) {
		if( s.pop() != str[i] ) {
			cout << "주어진 문자열은 회문이 아님" << endl;
			return 0;
		}
	}
	cout << "주어진 문자열은 회문임" << endl;
	return 0;
}
