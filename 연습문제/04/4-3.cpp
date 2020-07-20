#include <iostream>
using namespace std;

void main()
{

    int a, b;
    char oper;
    bool isContinue = true;

    while (isContinue)
    {

        cout << "**********" << endl;
        cout << "+ : 덧셈" << endl;
        cout << "- : 뺄셈" << endl;
        cout << "* : 곱셈" << endl;
        cout << "/ : 나눗셈" << endl;
        cout << "Q : 종료" << endl;
        cout << "**********" << endl;

        cout << "연산을 선택하세요 : ";
        cin >> oper;

        cout << "두 수를 공백으로 분리하여 입력하세요:";
        cin >> a, b;

        switch (oper)
        {
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            if(b != 0)
                cout<<a/b<<endl;
            break;
        case 'Q':
            isContinue = false;
            break;
        default:
            break;
        }
    }
}