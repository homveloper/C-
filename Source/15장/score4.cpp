#include <iostream>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream is;
	ofstream os;
	is.open("score.txt");	
	if( is.fail() ){
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	} 

	os.open("result.txt");	
	if( os.fail() ){
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	} 

	char c;
	int line_number=1;
	while(! is.eof() )
	{
		is.get(c);

		os << c;

		if( c == '\n' ){
			line_number++;
			os << line_number << ": ";
		}

	}
	is.close();
	os.close();
	return 0;
}		
