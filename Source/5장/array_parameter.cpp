#include <iostream>
using namespace std;

const int YEARS=3;
const int PRODUCTS=5;

int sum(int grade[][PRODUCTS]);

int main()
{
	int sales[YEARS][PRODUCTS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int total_sale;
	
	total_sale = sum(sales);
	cout << "총매출은 " << total_sale << "입니다." << endl;
	
	return 0;
}

int sum(int grade[][PRODUCTS])
{
	int y, p;
	int total = 0;
	
	for(y = 0; y < YEARS; y++)
		for(p = 0; p < PRODUCTS; p++)
			total += grade[y][p];
		
		return total;
}

