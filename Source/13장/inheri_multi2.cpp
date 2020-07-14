#include <iostream>
using namespace std;

class SuperA 
{   
public: 
	int x;
	void sub(){
		cout << "SuperA의 sub()" << endl;
	}   
};
class SuperB
{   
public: 
	int x;   
	void sub(){
		cout << "SuperB의 sub()" << endl;
	}   
};
class Sub : public  SuperA, public SuperB	
{
};

int main()
{
	Sub obj;
	obj.x = 10; 		// obj.x는 어떤 부모 클래스의 x를 참조하는가?
	return 0;
}
