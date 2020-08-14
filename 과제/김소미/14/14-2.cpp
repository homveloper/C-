#include <iostream>
using namespace std;

int input(const char *message)
{
    int i;
    cout << message;

    do
    {
        cin >> i;
        cin.clear(); // 오류스트림을 초기화
        cin.ignore(256, '\n'); // 입력버퍼를 비움
    } while (!cin.fail());

    return i;
}

int main()
{

    try
    {
        int score = input("점수 : ");
    }
    catch (int i)
    {
        cout << "잘못된 입력 : " << i << endl;
    }
}