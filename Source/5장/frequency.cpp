#include <iostream>
using namespace std

int main()
{
	const int SIZE=101;
	int freq[SIZE];
	int i, score;
	
	for(i = 0; i < SIZE; i++)
		freq[i] = 0;

	while(1)
	{
		cout <<("숫자를 입력하시오(종료는 -1): ";
		cin >> score;
		if (score < 0) break;
		freq[score]++;
	}

	cout << "값   빈도" << endl;

	for(i = 0; i < SIZE; i++)
		cout << i << freq[i] << endl;
	
	return 0;
}
