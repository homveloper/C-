#include <iostream>
#include <fstream>
using namespace std;

const int SIZE=1000;
void init_table(int table[], int size);

int main()
{
	int table[SIZE];
	int data;
	long pos;
	
	// 배열을 초기화한다.
	init_table(table, SIZE);

	// 이진 파일을 쓰기 모드로 연다.
	ofstream os;
	os.open("test.dat",ofstream::binary);
	if( os.fail() ) 
	{
		cout << "test.dat 파일을 열 수 없습니다." << endl;
		exit(1);
	}

	// 배열을 이진 모드로 파일에 저장한다.
	os.write((char *)table, sizeof(table));
	os.close();

	// 이진 파일을 읽기 모드로 연다.
	ifstream is;
	is.open("test.dat",ofstream::binary);
	if( is.fail() ) 
	{
		cout << "test.dat 파일을 열 수 없습니다." << endl;
		exit(1);
	}

	// 사용자가 선택한 위치의 정수를 파일로부터 읽는다.
	while(1)
	{	
		cout <<"파일에서의 위치를 입력하십시요(0에서 999, 종료-1): ";
		cin >> pos;
		if( pos == -1 ) break;
		is.seekg(pos*sizeof(int), ios::beg);
		is.read((char *)&data, sizeof(int));
		cout << pos << " 위치의 값은" << data << " 입니다." << endl;
	}
	is.close();
	return 0;
} 
	
// 배열을 인덱스의 제곱으로 채운다.
void init_table(int table[], int size)
{
	int i;

	for(i = 0; i < size; i++)
		table[i] = i * i;
}
