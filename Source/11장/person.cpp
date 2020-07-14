#include <iostream>
#include <string>
using namespace std;

class Person {
	string lastName;
	string firstName;
public:
	Person(string lastName, string firstName);
	string getLastName() {
		return lastName;
	};
	string getFirstName() {
		return firstName;
	}
	string buildName();
};
Person::Person(string lastName, string firstName) 
{
	this->lastName = lastName; 	// this는 현재 객체를 가리킨다.
	this->firstName = firstName; 	// this는 현재 객체를 가리킨다.
} 
string Person::buildName() {
	return this->getLastName() + this->getFirstName();	// ①
} 
int main()
{
	Person person("홍", "길동");
	cout << person.buildName() << endl;
}
