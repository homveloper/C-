//// 연습문제3. MyArray라는 이름의 클래스를 작성하여 보자. MyArray는 정수들을 저장하는 동적 배열을 구현한다.
////멤버 변수로는 배열의 크기를 나타내는 size와 정수들이 실제로 저장된 메모리를 가리키는 주소를 나타내는 ptr을 가진다.
////멤버 함수로는 정수를 추가하는 append(), 마지막 정수를 삭제하는 pop(), 배열 안의 정수를 출력하는 print()등을 가진다. MyArray 객체를 생성하여 이를 테스트 하라.
//
#include <iostream>
#include <string>
#include <array>
using namespace std;

class MyArray {
private:
	int size;
	int ptr;
	int arr;
public:
	//void ptr();
	void size();
};

void MyArray::size() {
	cout << "입력할 정수의 갯수는 ";
	int n;
	cin >> n;

	int* p;
	p = new int[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다." << endl;
	}
	cout << "사이즈는 " << n << endl;
}
//
//void append() {
//	cin >> int A;
//	append(n, A);
//}

//void MyArray::ptr() {
//	ptr = *;
//	cout << "데이터가 저장된 메모리 주소는 " << ptr << endl;
//}

int main() {
	MyArray m;
	m.size();
}