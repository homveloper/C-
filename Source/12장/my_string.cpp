#include <iostream>
using namespace std;

class MyString
{
private:
	char *pBuf; 		//동적으로 할당된 메모리의 주소값 저장

public:
	MyString(const char *s=NULL); 
	MyString(MyString& s);
	~MyString();

	void print();    	// 문자열을 화면에 출력
	int getSize();   	// 문자열의 길이 반환
	MyString operator+(MyString& s);	// + 연산자 중복 정의
};

// 생성자
MyString::MyString(const char *s)
{
	if( s == NULL )
	{
		pBuf = new char[1];
		pBuf[0] = NULL;
	}
	else 
	{
		pBuf = new char[::strlen(s)+1];
		strcpy(pBuf, s);
	}
}

// 복사 생성자
MyString::MyString(MyString &s)
{
	pBuf = new char[s.getSize()+1];
	strcpy(pBuf, s.pBuf);
}

// 소멸자
MyString::~MyString()
{
	if ( pBuf )
		delete [] pBuf;
}

void MyString::print()
{
	cout << pBuf << endl;
}

int MyString::getSize()
{
	return strlen(pBuf);
}
MyString MyString::operator+(MyString& s)
{
	char *temp = new char[getSize() + s.getSize() + 1];
	strcpy(temp, pBuf);
	strcat(temp, s.pBuf);
	MyString r(temp);
	delete [] temp;
	return r;
}

int main() {

	MyString s1("Hello ");
	MyString s2("World!");
	MyString s3 = s1 + s2;

	s1.print();
	s2.print();
	s3.print();

	return 0;
}
