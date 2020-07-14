#include <iostream>
#include <list>
using namespace std;

void print_list(list<int>& li);
int main()
{
	list<int> my_list;

	my_list.push_back(10);
	my_list.push_back(20);
	my_list.push_back(30);
	my_list.push_back(40);

	my_list.insert(my_list.begin(), 5);
	my_list.insert(my_list.end(), 45);
	print_list(my_list);
	return 0;
}

void print_list(list<int>& li)
{
	list<int>::iterator it;
	for(it=li.begin(); it!=li.end(); ++it)
		cout << *it << " ";
	cout << endl;
}
