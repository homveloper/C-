#include <iostream>
#include <fstream>		// 파일 입출력을 하려면 헤더 파일을 포함하여야 한다. 
using namespace std;

int main()
{
	ofstream os;
	char c;
	os.open("test.txt");
	while( cin.get(c)  )
	{	
		os.put(c);
	}
	os.close();
	return 0;
}
