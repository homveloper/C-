#include <iostream>
#include <string>

using namespace std;
class  Employee {   
	int rrn;           // Regident Resgistration Number: 주민등록번호

protected:
	int salary;      // 월급

public:
	string name;	// 이름
	void setSalary(int salary);
	int getSalary();
};

void Employee::setSalary(int salary) {
	this->salary = salary;
}
int Employee::getSalary() {
	return salary;
}

class Manager : public Employee { 
	int bonus;
public: 
	Manager(int b=0) : bonus(b) { }
	void modify(int s, int b);
	void display();
};

void Manager::modify(int s, int b) {
	salary = s;	// 부모 클래스의 보호 멤버 사용 가능!
	bonus = b;

}
void Manager::display()
{
	cout << "봉급: " << salary << " 보너스: " << bonus << endl;
	// cout << "주민등록번호: " << rrn << endl;	// 부모 클래스의 전용 멤버는 사용할 수 없음!!
}

int main()
{
	Manager m;
	m.setSalary(2000);
	m.display();
	m.modify(1000, 500);
	m.display();
}
