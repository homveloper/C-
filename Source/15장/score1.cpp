#include <iostream>
#include <fstream>		// 파일 입출력을 하려면 헤더 파일을 포함하여야 한다. 
using namespace std;

int main()
{
	ifstream is;
	is.open("score.txt");
	if( !is ) {		// ! 연산자 오버로딩
		cerr << "파일 오픈에 실패하였습니다" << endl;
		exit( 1 );
	}

	int number;		//학번
	char name[30];	// 이름
	int score;		// 성적
	is >> number >> name >> score;

	ofstream os;
	os.open("result.txt");
	os << number << " " << name << " " << score << endl;

	is.close();
	os.close();
	return 0;
}			
