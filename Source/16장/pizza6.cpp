#include <iostream>
using namespace std;


class NoPersonException
{
public:
	NoPersonException();
	NoPersonException(int p) { persons = p; };
	int get_persons() { return persons; };
private:
	int persons;
};

int main()
{
	int pizza_slices = 12;
	int persons = -1;
	int slices_per_person=0;

	try {
		cout << "피자 조각수를 입력하시오: ";
		cin >> pizza_slices;
		cout << "사람수를 입력하시오: ";
		cin >> persons;
		if( persons <= 0 ) throw NoPersonException(persons);		// 예외 발생!
		slices_per_person = pizza_slices / persons;		
		cout << "한사람당 피자는 " << slices_per_person << "입니다." << endl;
	} 
	catch (NoPersonException e) 
	{
		cout << "오류: 사람이 " << e.get_persons() << "명 입니다" << endl;
	}
	return 0;
}
