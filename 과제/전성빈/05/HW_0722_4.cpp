#include <iostream>
using namespace std;

int add_money;
int money = 0;
void save(int add_money);

void save(int add_money) {
	if (add_money != -1)
		cout << "총 저축액은" << money + add_money << "입니다" << endl;
	else if (add_money = -1)
		break;
}

int main() {
	cout << "얼마를 저축하시겠습니까?" << "종료는 -1" << endl;
	cout << "총 저축액은 " << money << "입니다" << endl;

}
