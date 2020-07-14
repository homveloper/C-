#include <iostream>
using namespace std;

class Time {
private:
	int hour; // 0 - 23
	int minute; // 0 - 59
	int second; // 0 - 59
public:
	Time();								// 생성자
	Time(int h, int m, int s);
	void setTime(int h, int m, int s);
	void print();
};
// 첫 번째 생성자
Time::Time() 
{
	setTime(0, 0, 0);
}

// 두 번째 생성자
Time::Time(int h, int m, int s) 
{
	setTime(h, m, s);
}

// 시간 설정 함수
void Time::setTime(int h, int m, int s) 
{
	hour = ((h >= 0 && h < 24) ? h : 0); // 시간 검증
	minute = ((m >= 0 && m < 60) ? m : 0); // 분 검증
	second = ((s >= 0 && s < 60) ? s : 0); // 초 검증
}

// “시:분:초”의 형식으로 출력 
void Time::print() 
{
	cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
	Time time1;

	cout << "기본 생성자 호출 후 시간:  ";
	time1.print();

	// 두 번째 생성자 호출
	Time time2(13, 27, 6);
	cout << "두번째 생성자 호출 후 시간: ";
	time2.print();

	// 올바르지 않은 시간으로 설정해본다.
	Time time3(99, 66, 77);
	cout << "올바르지 않은 시간 설정 후 시간: ";
	time3.print();

	return 0;
}
