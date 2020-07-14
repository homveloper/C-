// strcpy¿Í strcat
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char string[80];

	strcpy( string, "Hello World from " ); 
	strcat( string, "strcpy() " );           
	strcat( string, "and " );              
	strcat( string, "strcat()!" );          
	cout << string << endl;
	return 0;
}
