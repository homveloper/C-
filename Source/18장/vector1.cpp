#include <iostream>
#include <vector>		// 벡터를 사용하려면 이 헤더 파일을 포함하여야 한다
using namespace std;

int main()
{
	vector<double> scores(10);	// 벡터를 생성한다. 

	for(int i = 0; i < scores.size() ; i++)
	{
		cout << "성적을 입력하시오: ";
		cin >> scores[i];	
	}

	double highest = scores[0];
	for(int i = 1; i < scores.size() ; i++)
		if( scores[i] > highest )
			highest = scores[i];
	cout << "최고 성적은 " << highest << "입니다.\n";

	return 0;
}
