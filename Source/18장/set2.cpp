#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> my_set;

	my_set.insert(1);
	my_set.insert(2);
	my_set.insert(3);
	
	set<int>::iterator  pos = my_set.find(2);
	if( pos != my_set.end() )
		cout << "값 " << *pos << "가 발견되었음" << endl;
	else 
		cout << "값이 발견되지 않았음" << endl;
	return 0;
}
