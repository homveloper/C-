#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

// 0에서 9까지의 n개의 난수를 화면에 출력한다. 
void get_random( int n )
{
	int i;
	for( i = 0; i < n; i++ )
		cout << rand() << endl;
}

int main()
{
	// 일반적으로 난수 발생기의 시드(seed)를 현재 시간으로 설정한다. 
	// 현재 시간은 수행할 때마다 달라지기 때문이다. 
	srand( (unsigned)time( NULL ) );
	get_random( 10 );
	
	return 0;
}
