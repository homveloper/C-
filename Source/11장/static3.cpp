#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name;
	double salary;

	static int count; 	// 정적 변수
public:
	// 생성자 
	Employee(string n="", double s=0.0): name(n), salary(s) {
		count++; // 정적 변수인 count를 증가
	} 

	// 객체가 소멸될 때 호출된다. 
	~Employee() {
		count--; // 직원이 하나 줄어드는 것이므로 count를 하나 감소
	} 

	// 정적 멤버 함수
	static int getCount() {
		return count;
	} 
};
int Employee::count=0; 	// 정적 변수

int main()
{
	Employee e1("김철수", 35000);
	Employee e2("최수철", 50000);
	Employee e3("김철호", 20000);

	int n = Employee::getCount();
	cout << "현재의 직원수=" << n << endl;
	return 0;
}
