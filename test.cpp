#include "iostream"
using namespace std;

int main(){
    int x,y = 0;            //x와 y 모두 0으로 초기화
    char grade = 'A';       //문자 A의 아스키 코드를 grade에 대입
    double rate = 10^10;    //rate에 1*10^10을 대입
    int salary = 2,000,000; //salary에 2,000,000을 대입

    cout.setf(ios_base::fixed);
    cout<<rate<<endl;

    return 0;
}