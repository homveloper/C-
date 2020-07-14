#include <iostream>
#include <string>
using namespace std;
class Employee {
	string name;	// private 로 선언
	int salary;	// private 로 선언
	int age;		// private 로 선언
	// 직원의 월급을 반환
	int getSalary() {	return salary;	}
public:
	// 직원의 나이를 반환
	int getAge() {	return age;	}
	// 직원의 이름을 반환
	string getName() {    return name;	}
};

int main()
{
	Employee e;
	e.salary = 300; 	// 오류! private 변수
	e.age = 26; 	// 오류! private 변수
	int sa = e.getSalary();	// 오류! private 멤버 함수
	string s = e.getName(); // OK!
	int a = e.getAge();	// OK
}
