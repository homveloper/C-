#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;	
	dq.push_back(99);
	dq.push_back(1);
	dq.push_front(35);
	dq.push_front(67);

	for(int i=0;i<dq.size();i++)
		cout << dq[i] << " ";	// [] 연산자 사용
	cout << endl;
	dq.pop_back();
	dq.pop_front();
	for(int i=0;i<dq.size();i++)
		cout << dq[i] << " ";	// [] 연산자 사용
	cout << endl;

	return 0;
}
