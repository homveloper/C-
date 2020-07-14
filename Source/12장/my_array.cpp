#include <iostream>
#include <assert.h>
using namespace std;

// 향상된 배열을 나타낸다. 
class MyArray {
	friend ostream& operator<<(ostream &, const MyArray &);	// 출력 연산자 <<
private:
	int *data;		// 배열의 데이터
	int size;		// 배열의 크기

public:
	MyArray(int size = 10);	// 디폴트 생성자
	~MyArray();			// 소멸자

	int getSize() const;		// 배열의 크기를 반환
	MyArray& operator=(const MyArray &a);	// = 연산자 중복 정의
	int& operator[](int i);	// [] 연산자 중복: 설정자
};

MyArray::MyArray(int s) {
	size = (s > 0 ? s : 10);    // 디폴트 크기를 10으로 한다.
	data = new int[size];      // 동적 메모리 할당

	for (int i = 0; i < size; i++)
		data[i] = 0;           // 요소들의 초기화 
}

MyArray::~MyArray() {
	delete [] data;                       // 동적 메모리 반납
	data = NULL;
}

MyArray& MyArray::operator=(const MyArray& a) {
	if (&a != this) {			// 자기 자신인지를 체크
		delete [] data;			// 동적 메모리 반납
		size = a.size;			// 새로운 크기를 설정
		data = new int[size];		// 새로운 동적 메모리 할당 

		for (int i = 0; i < size; i++)
			data[i] = a.data[i];	// 데이터 복사
	}
	return *this;				// a = b = c와 같은 경우를 대비
}

int MyArray::getSize() const 
{ 
	return size; 
}

int& MyArray::operator[](int index) {
	assert(0 <= index && index < size);	// 인데스가 범위에 있지 않으면 중지
	return data[index]; 
}

// 프렌드 함수 정의
ostream& operator<<(ostream &output, const MyArray &a) {
	int i;
	for (i = 0; i < a.size; i++) {
		output << a.data[i] << ' ';
	}
	output << endl;
	return output;			// cout << a1 << a2 << a3와 같은 경우 대비
}

int main()
{
	MyArray a1(10);

	a1[0] = 1;
	a1[1] = 2;
	a1[2] = 3;
	a1[3] = 4;
	cout << a1 ;

	return 0;
}		
