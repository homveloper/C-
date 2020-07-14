#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	int age;
	bool gender;
public:
	Person(string n="", int a=0, bool g=true): name(n), age(a), gender(g) { }
	void setName(string s) { name = s; }
	string getName() const { return name; }
	void setAge (int a) { age = a; }
	int getAge() const { return age; }
	void setGender (bool g) { gender = g; }
	bool getGender() const { return gender; }
};

class Employee : public Person {
	int number;
	int salary;
public:
	Employee(string n="", int a=0, bool g=true, int num=0, int s=0): Person(n,  a, g), number(num), salary(s) { }
	void display() const;
	void setNumber (int n) { number = n; }
	int getNumber() const { return number; }
	void setSalary (int s) { salary = s; }
	int getSalary() const { return salary; }
};

void Employee::display() const
{
	cout << this->getName() << endl;
	cout << this->getAge() << endl;
	cout << this->getGender() << endl;
	cout << this->getNumber() << endl;
	cout << this->getSalary() << endl;
}

int main()
{
	Employee e("±èÃ¶¼ö", 26, true, 2010001, 2800);
	e.display();
	return 0;
}
