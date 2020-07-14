#include <iostream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "This is a test."; // string 객체를 생성하고 초기화한다. 
		
	s1.insert(4, "Hello");
	cout << s1 << endl;
	int index = s1.find("test");
	cout << index << endl;
	s1.append("World");
	cout << s1 << endl;
	return 0;
}
