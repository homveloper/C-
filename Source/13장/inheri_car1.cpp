#include <iostream>
#include <string>
using namespace std;
class Car {	
public:
	int getHP()	
	{		
		return 100;	// 100마력 반환
	}
};
class SportsCar : public Car {	
public:

	int getHP()	
	{
		return 300;	// 300마력 반환
	}
};
int main()
{
	SportsCar sc;
	cout << "마력: " << sc.getHP() << endl;
	return 0;
}
