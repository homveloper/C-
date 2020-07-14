// 벡터를 변형하여서 스택을 생성한다.
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<string> st;
	string sayings[3] =
	{"The grass is greener on the other side of the fence",
	"Even the greatest make mistakes",
	"To see is to believe" };

	for (int i =0; i < 3; ++i)
		st.push(sayings[i]);
	while (!st.empty()) {
		cout << st.top() << endl;
		st.pop();
	}
	return 0;
}
