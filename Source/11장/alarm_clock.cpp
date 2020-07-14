#include <iostream>
#include <string>
using namespace std;

// 시각을 나타내는 클래스 
class Time {
private:
	int time;		// 시간
	int minute;		// 분
	int second;		// 초
public:
	Time();		// 디폴트 생성자
	Time(int t, int m, int s);	// 생성자
	void print();		// 객체의 정보 출력
};

Time::Time() {		// 디폴트 생성자
	time = 0;
	minute = 0;
	second = 0;
}
Time::Time(int t, int m, int s) {	// 생성자
	time = t;
	minute = m;
	second = s;
}
void Time::print()	// 객체의 정보를 출력
{
	cout << time << "시 " << minute << "분 " << second << "초 \n";
}

// 알람 시계를 나타낸다.
class AlarmClock {
private:
	Time currentTime;	// 현재 시각
	Time alarmTime;	// 알람 시각
public:
	AlarmClock(Time a, Time c);	// 생성자
	void print();		// 객체의 정보 출력
};

AlarmClock::AlarmClock(Time a, Time c) {	// 생성자
	alarmTime = a;		// 객체가 복사된다. 
	currentTime = c;		// 객체가 복사된다. 
}

void AlarmClock::print()
{
	cout << "현재 시각: ";
	currentTime.print();
	cout << "알람 시각: ";
	alarmTime.print();
}

int main()
{
	Time alarm(6, 0, 0);
	Time current(12, 56, 34);
	AlarmClock c(alarm, current);

	c.print();
	return 0;
} 
