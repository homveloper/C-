#include <iostream>
using namespace std;

class Animal 
{
public: 
	Animal() { cout <<"Animal 생성자" << endl; }
	~Animal() { cout <<"Animal 소멸자" << endl; }

	virtual void speak() =0;
    virtual void eat() = 0;
    virtual void move() = 0;
};

class Dog : public Animal 
{
public: 
	Dog() { cout <<"Dog 생성자" << endl; }
	~Dog() { cout <<"Dog 소멸자" << endl; }

	void speak() {
        cout <<"멍멍" << endl; 
    }
    void eat(){
        cout<<"개사료"<<endl;
    }
    void move(){
        cout<<"강아지 가다"<<endl;
    }
};

int main()
{
	Animal *a1 = new Dog();
	a1->speak();

	return 0;
}