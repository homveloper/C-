// 연습문제 3.간단한 메뉴 시스템을 작성해보자. 메뉴를 보여주고 사용자로 부터 입력을 받아서 입력이 올바른지 검사한다.
//메뉴를 선택하면 실제로 처리할 필요는 없고 선택되었다는 메시지만 보여주면 된다.(성공 근데 3번밖에 안됨)

#include <iostream>
using namespace std;
int menu;
int printMenu();
int getMenuNumber();
int answer();

int main()
{
    printMenu();
    while (menu < 1 || menu > 4)
    {
        getMenuNumber();
        return getMenuNumber();
    }
    while (menu >= 1 && menu <= 4)
    {
        answer();
        return 0;
    }
}

int printMenu()
{
    cout << "1. 짜장면" << endl;
    cout << "2. 짬뽕" << endl;
    cout << "3. 볶음밥" << endl;
    cout << "4. 탕수육" << endl;
    cout << "원하는 메뉴를 선택하세요 : ";
    cin >> menu;
    return 0;
}

int getMenuNumber()
{
    if (menu < 1 || menu > 4)
    {
        cout << "We don't have this menu" << endl;
        printMenu();
        return 0;
    }
}

int answer()
{
    if (menu >= 1 && menu <= 4)
    {
        cout << "Ok, Prepare good food for you" << endl;
        return 0;
    }
}