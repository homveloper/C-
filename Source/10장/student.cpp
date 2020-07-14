#include <iostream>
#include <string>
using namespace std;

class Student {
	char *name; // 이름
	int number;
public:
	// 첫 번째 생성자
	Student(char *pn, int n) {
		name = new char[strlen(pn)+1];
		strcpy(name, pn);
		number = n;
	}
	~Student() {
		delete [] name;
	}
	void setName(char *pn)
	{
		delete[] name;
		name = new char[strlen(pn)+1];
		strcpy(name, pn);
	}
	void printInfo()
	{
		cout << "이름: " << name << " ";
		cout << "학번: " << number << endl;
	}
};
int main()
{
	Student s1("Park", 20100001);
	Student s2(s1);	// 복사 생성자 호출

	s1.printInfo();
	s2.printInfo();
	s1.setName("Kim");

	s1.printInfo();
	s2.printInfo();
	return 0;
