#include <iostream>
#include <string>
using namespace std;

// 학생을 나타낸다. 
class Student {
private:
	string name;
	string telephone;
public:
	Student(const string n="", const string t="");
	string getTelephone() const;
	void setTelephone(const string t);
	string getName() const;
	void setName(const string n);
};

Student::Student(const string n, const string t)
{
	name = n;
	telephone = t;
}

string Student::getTelephone() const
{
		return telephone;
}
void Student::setTelephone(const string t)
{
		telephone = t;
}

string Student::getName() const
{
		return name;
}
void Student::setName(const string n)
{
		name = n;
}

// 연구실을 나타낸다. 
class Lab {
       string name;
	   Student *chief;
	   Student *manager;
public:
	Lab(string n="");
	void setChief(Student *p);
	void setManager(Student *p);
	void print() const;
};

Lab::	Lab(const string n)
{
	name = n;
	chief = NULL;
	manager = NULL;
}

void Lab::setChief(Student *p)
{
	chief = p;
}

void Lab::setManager(Student *p)
{
		manager = p;
}
	
void Lab::print() const
{
	cout << name << "연구실" << endl;
	if( chief != NULL )
		cout << "실장은 " << chief->getName() << endl;
	else 
		cout << "실장은 현재 없습니다\n";
	if( manager != NULL )
		cout << "총무는 " << manager->getName() << endl;
	else 
		cout << "총무는 현재 없습니다\n";
}

int main()
{
	Lab lab("영상 처리");
	Student *p= new Student("김철수", "011-123-5678");

	lab.setChief(p);
	lab.setManager(p);
	lab.print();

	delete p;
	return 0;
}		
