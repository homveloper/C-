#include <iostream>
using namespace std;

int main() 
{ 
	int var;
	int &ref = var; 		// 레퍼런스 선언 

	var = 10;		
	cout << "var의 값: " << var << endl;
	cout << "ref의 값: " << ref << endl;

	ref = 20;		// ref의 값을 변경하면 var의 값도 변경된다. 
	cout << "var의 값: " << var << endl;
	cout << "ref의 값: " << ref << endl;

	return 0;
}
