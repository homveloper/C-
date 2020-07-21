#include <iostream>
using namespace std;

void main(void)
{
	const int STUDENTS=5;
	int grade[STUDENTS];
	int sum = 0;
	double average;
	
	for(int i = 0; i < STUDENTS; i++)
	{
		cout << "학생들의 성적을 입력하시오: ";	
		cin >> grade[i];
	}

	for(int i = 0; i < STUDENTS; i++)
		sum += grade[i];

	average = sum / STUDENTS;
	cout << "성적 평균= " << average << endl;
}