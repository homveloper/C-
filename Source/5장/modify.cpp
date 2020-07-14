// 동일한 이름의 전역 변수와 지역 변수
#include <iostream>
using namespace std;

const int SIZE=7;
void square_array(int a[], int size);
void print_array(int a[], int size);
void square_element(int e);

int main()
{
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 } ;

	square_element(list[2]);	// 배열 요소는 복사본이 전달된다.
	print_array(list, SIZE);	

	square_array(list, SIZE);	// 배열은 원본이 전달된다.
	print_array(list, SIZE);	

	return 0;
}

void square_array(int a[], int size)
{
	int i;

	for(i = 0; i < size; i++)
		a[i] = a[i] * a[i];
}

void square_element(int e)
{
	e = e * e;
}

void print_array(int a[], int size)
{
	int i;

	for(i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}
