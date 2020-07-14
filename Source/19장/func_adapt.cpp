#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	vector<int> vec;
	for(int i=0;i<10; i++)
		vec.push_back(rand()%100);
	vector<int>::iterator it;

	for (it=vec.begin();;it++) {
		it=find_if(it, vec.end(), bind2nd (greater<int>(), 50)) ;
		if (it==vec.end()) break;
		cout << *it << " ¹ß°ß" << endl;
	}
	return 0;
}
