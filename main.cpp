#include <iostream>
using namespace std;

class Aniaml
{
public:
	void display() { cout << "ParentException" << endl; }
};

class Lion : public Aniaml
{
public:
	void display() { cout << "ChildException" << endl; }
};

int main()
{
	try {
		throw Lion();
	} 
    catch (Lion& e) 
	{
		e.display();
	}
	catch (Aniaml& e) 
	{
		e.display();
	}
	return 0;
}