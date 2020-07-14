#include <iostream>
using namespace std;

class Animal 
{
public: 
	Animal() { cout <<"Animal 积己磊" << endl; }
	~Animal() { cout <<"Animal 家戈磊" << endl; }
	virtual void speak() { cout <<"Animal speak()" << endl; }
};

class Dog : public Animal 
{
public: 
	Dog() { cout <<"Dog 积己磊" << endl; }
	~Dog() { cout <<"Dog 家戈磊" << endl; }
	void speak() { cout <<"港港" << endl; }
};

class Cat : public Animal 
{
public: 
	Cat() { cout <<"Cat 积己磊" << endl; }
	~Cat() { cout <<"Cat 家戈磊" << endl; }
	void speak() { cout <<"具克" << endl; }
};

int main()
{
	Animal *a1 = new Dog();
	a1->speak();

	Animal *a2 = new Cat();
	a2->speak();
	return 0;
}
