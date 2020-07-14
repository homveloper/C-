#include <iostream>
using namespace std;

int mode;	// 전역 변수 mode
void message()
{
	cout << "전역 공간 안의 message()" << endl; 	
}

namespace Graphics {
	int mode;
	int x, y;
	void draw() { cout << "Graphics 이름 공간 안의 draw()" << endl; };	
	void message() { cout << "Graphics 이름 공간 안의 message()" << endl; };	
}

int main()
{
	using namespace Graphics;

	//mode = 1;		// 컴파일 오류!!
	Graphics::mode = 1;	// Graphics 공간 안의 mode
	::mode = 1;		// 전역 변수 mode

	//message();		// 컴파일 오류
	Graphics::message();	// Graphics 공간 안의 message()
	::message();		// 전역 함수
	return 0;
}
