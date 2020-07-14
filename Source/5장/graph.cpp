#include <iostream>
using namespace std

int main()
{
	const int STUDENTS=5;
	int grade[STUDENTS] = { 30, 20, 10, 40, 50 };
	int i, s;
	
	for(i = 0; i < STUDENTS; i++)
	{
		cout << "¹øÈ£ " << i;
		for(s = 0; s < grade[i]; s++)
			cout << "*";
		cout << endl;
	}

	return 0;
}
