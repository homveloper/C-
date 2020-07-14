#include <iostream>
#include <set>
using namespace std;

template  <typename T>
void print_list(const T& container);

int main()
{
	set<int> my_set;
	multiset<int> my_multiset;

	my_set.insert(1);
	my_set.insert(2);
	my_set.insert(3);

	my_multiset.insert(my_set.begin(), my_set.end());
	my_multiset.insert(3);
	my_multiset.insert(4);

	print_list(my_set);
	print_list(my_multiset);
	return 0;
}

template  <typename T>
void print_list(const T& container)
{
	T::const_iterator it;
	for(it=container.begin(); it!=container.end(); ++it)
		cout << *it << " ";
	cout << endl;
}
