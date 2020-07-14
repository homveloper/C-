#include <iostream>
using namespace std;
int get_average(int score[], int n);//①

int main(void) 
{ 
	const int STUDENTS=5;
	int grade[STUDENTS] = { 1, 2, 3, 4, 5 }; 
	int avg; 
	avg = get_average(grade, STUDENTS); 
	cout <<"평균은 " << avg <<"입니다.\n";
	return 0; 
}
int get_average(int score[], int n)// ②
{ 
	int i; 
	int sum = 0; 
	for(i = 0; i < n; i++) 
		sum += score[i]; 
	return sum / n; 
} 
