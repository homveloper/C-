// 연습문제 3.사용자로부터 입력 받은 문자열에서 알파벳의 개수, 숫자의 개수, 공백 문자의 개수를 계산하는 프로그램을 작성해보자.
// 예를들어 "2020 kumoh university"라고 입력하면 알파벳의 개수는 15, 숫자의 개수는 4, 공백의 개수는 2이다.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	getline(cin, word);
	int cnt = 0;
	int num = 0;

	for (int i = 0; i < word.size(); i++) {
		if (word[i] == ' ') cnt++;
		else if (word[i] >= '0' && word[i] <= '9') num++;
	}

	cout << "알파벳의 갯수는 " << word.size() << endl;
	cout << "숫자의 갯수는 " << num << endl;
	cout << "공백의 갯수는 " << cnt << endl;
}