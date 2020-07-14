#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> vec;		// 벡터를 생성한다. 

	vec.push_back("MILK");		// 벡터의 끝에 자료를 저장한다.
	vec.push_back("BREAD");
	vec.push_back("BUTTER");

	vector<string>::iterator it;	// 벡터를 순회하기 위해여 반복자를 선언한다.
	for(int i=0;i<vec.size();i++)
		cout << vec[i] << " ";	// [] 연산자 사용
	cout << endl;

	vec.insert(vec.begin()+1, "APPLE");	// 벡터의 첫부분에 자료를 저장한다.
	vec.pop_back();		// 벡터의 끝에서 자료를 삭제한다.

	for (it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
