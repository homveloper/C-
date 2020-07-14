#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	queue<int> qu;
	qu.push(100);
	qu.push(200);
	qu.push(300);
	while (!qu.empty()) {
		cout << qu.front() << endl;
		qu.pop();
	}
	return 0;
}
