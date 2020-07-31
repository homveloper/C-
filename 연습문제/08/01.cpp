#include <iostream>
#include <string>
using namespace std;

void main()
{
    string s1 = "a";
    string s2 = "b";

    s1.append(s2); //s1의 마지막 위치에 s2를 추가한다.

    cout << s1 << endl;

    s1 = "a";
    s2 = "b";
    cout << s1.compare(s2) << endl; //s1이 s2보다 사전순서상 앞에 있음

    s1 = "a";
    s2 = "a";
    cout << s1.compare(s2) << endl; //s1과 s2가 동일함

    s1 = "b";
    s2 = "a";
    cout << s1.compare(s2) << endl; //s1이 s2보다 사전순서상 뒤에 있음

    s1 = "hello world";
    cout<<s1.find('l',0)<<endl; //s1의 0번째 위치 부터 'l'이 처음으로 나오는 위치

    cout<<s1.at(3)<<endl;   //s1의 3번째 위치의 문자

    s1.clear();             //s1의 내용 초기화
    cout<<(s1.empty() ? "비었음" : s1)<<endl;
}