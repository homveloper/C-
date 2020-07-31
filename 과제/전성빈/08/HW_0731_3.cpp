#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	getline(cin, word);
	int null = 0;
	int number = 0;

	for (int i = 0; i < word.size(); i++)
		if (word[i] == ' ')
			null++;
		else if (word[i] >= '0' && word[i] <= '9')
			number++;

	cout << "공백의 개수 :" << null << endl;
	cout << "숫자의 개수" << number << endl;
	// 알파벳은 어떻게 하는지 모르겠습니다...!
	// 숫자랑 개수가 같이 나오네용...
}