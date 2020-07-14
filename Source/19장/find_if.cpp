#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// 문자열 s가 “김”을 포함하면 true를 반환
bool checkKim(string s)
{
	if( s.find("김") != string::npos)
		return true;
	else 
		return false;
}

int main()
{
	string names[5] = { "김철수", "박문수", "강감찬", "김유신", "이순신" };
	vector<string> vec(&names[0], &names[5]);	// 배열->벡터

	vector<string>::iterator it;		// 반복자 정의
	it = vec.begin();
	while(true){
		it=find_if(it, vec.end(),checkKim);
		if (it==vec.end()) 			// 탐색 실패
			break;
		cout << "위치 " << distance(vec.begin(), it)<< 
			"에서 " << *it << "를 탐색하였음" << endl;
		it++;
	}
	return 0;
}
