#include <iostream>
using namespace std;

const int STUDENTS = 3;
const int GRADE = 5;

int main()
{
	int grade[STUDENT][GRADE] = {
		{  0,  1,  2,  3,  4 },	// 첫번째 행의 원소들의 초기값
		{ 10, 11, 12, 13, 14 },	// 두번째 행의 원소들의 초기값
		{ 20, 21, 22, 23, 24 },	// 세번째 행의 원소들의 초기값
	};
	
    int total = 0;

	for(int i = 0; i < STUDENT; i++)
	{
		int subtotal = 0;
		
        for(int j; j < GRADE; j++)
			subtotal += grade[i][j];

		cout << "학생 " << i << "의 평균 성적= " << subtotal / GRADE << endl;
		total += subtotal;
	}
	
	cout << "전체 학생들의 평균 성적= " << total/(STUDENT * GRADE) << endl;
	
	return 0;
}