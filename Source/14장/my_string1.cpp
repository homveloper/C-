#include <iostream>
using namespace std;

class String {
	char *s;
public:
	String(char *p){
		s = new char[strlen(p)+1];
		strcpy(s, p);
	}
	~String(){
		cout << "String() 소멸자" << endl;
		delete[] s;
	}
};
class MyString : public String {
	char *header;
public:
	MyString(char *h, char *p) : String(p){
		header = new char[strlen(h)+1];
		strcpy(header, h);
	}
	~MyString(){
		cout << "MyString() 소멸자" << endl;
		delete[] header;
	}
};

int main()
{
	cout << "자식 클래스 포인터 이용"<< endl;
	MyString *s1 = new MyString("//////", "Hello World!");
	delete s1;
	cout << endl;


	cout << "부모 클래스 포인터 이용"<< endl;
	String *s2 = new MyString("*****", "Hello World!");
	delete s2;

	return 0;
}
