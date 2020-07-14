#include <iostream>
using namespace std;
enum BREED { YORKIE, POODLE, BULLDOG };

class Animal
{
protected:
	int age;	// 나이
	int weight;	// 몸무게

public:
	// 생성자와 소멸자
	Animal();
	~Animal();

	// 멤버 함수들
	void speak() const;
	void sleep() const;
	void eat() const;
};
Animal::Animal() 
{ 
	cout << "Animal 생성자\n"; 
}
Animal::~Animal() 
{ 
	cout << "Animal 소멸자\n"; 
}

// 멤버 함수들
void Animal::speak() const 
{ 
	cout << "Animal speak()\n"; 
}
void Animal::sleep() const 
{ 
	cout << "Animal sleep()\n"; 
}
void Animal::eat() const 
{ 
	cout << "Animal eat()\n"; 
}

class Dog : public Animal
{
private:
	BREED breed;
public:

	// 생성자와 소멸자
	Dog();
	~Dog();

	// 멤버 함수들
	void wag(); 
	void bite();
	void speak() const;

};

Dog::Dog()
{ 
	cout << "Dog 생성자\n"; 
}
Dog::~Dog()
{ 
	cout << "Dog 소멸자\n"; 
}

// 멤버 함수들
void Dog::wag() 
{ 
	cout << "Dog wag()\n"; 
}
void Dog::bite() 
{ 
	cout << "Dog bite()\n"; 
}
void Dog::speak() const 
{ 
	cout << "Dog speak()\n"; 
}

int main()
{
	Dog dog;

	dog.eat();
	dog.sleep();
	dog.speak();
	dog.wag();

	return 0;
}
