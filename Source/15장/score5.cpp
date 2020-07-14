#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int buffer[] = { 10, 20, 30, 40, 50 };
	ofstream os;
	os.open("test.dat",ofstream::binary);
	if( os.fail() ) 
	{
		cout << "binary.txt 파일을 열 수 없습니다." << endl;
		exit(1);
	}
	os.write((char *)&buffer, sizeof(buffer));	
	os.close();
	return 0;
}
