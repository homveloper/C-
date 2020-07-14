#include <iostream>
using namespace std;

int main(void)
{
	const int STUDENTS=5;
	int grade[STUDENTS];
	int sum = 0;
	int i, average;
	
	for(i = 0; i < STUDENTS; i++)
	{
		cout << "학생들의 성적을 입력하시오: ";	
		cin >> grade[i];
	}

	for(i = 0; i < STUDENTS; i++)
		sum += grade[i];

	average = sum / STUDENTS;
	cout << "성적 평균= " << average << endl;

	return 0;
}
