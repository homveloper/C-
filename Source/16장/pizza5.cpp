#include <iostream>
using namespace std;

int main()
{
	int pizza_slices = 12;
	int persons = 0;
	int slices_per_person=0;

	try {
		cout << "피자 조각수를 입력하시오: ";
		cin >> pizza_slices;
		cout << "사람수를 입력하시오: ";
		cin >> persons;

		if( persons < 0 ) throw "negative";		// 예외 발생!
		if( persons == 0 ) throw persons;		// 예외 발생!
		slices_per_person = pizza_slices / persons;		
		cout << "한사람당 피자는 " << slices_per_person << "입니다." << endl;
	} 
	catch (const char *e) {
		cout << "오류: 사람수가 " << e << "입니다" << endl;
	}
	catch (int e) {
		cout << "오류: 사람이 " << e << " 명입니다." << endl;
	}
	return 0;
}
