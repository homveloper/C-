#include <iostream>
using namespace std;

int menu;
int pritMenu();
int getMenuNumber();

int printMenu() {
	cout << "1. 짜장면" << endl;
	cout << "2. 짬뽕" << endl;
	cout << "3. 볶음밥" << endl;
	cout << "4. 탕수육" << endl;
	cout << "Select Menu you want" << endl;
	cin >> menu;
}

int getMenuNumber() {
	if (menu > 4 || menu < 1) {
		cout << "check your menu number" << endl;
		printMenu();
	}
}

int main()
{
	printMenu();
	getMenuNumber();
	return 0;
}

