#include <iostream>
#include <cmath>
using namespace std;

#define RAD_TO_DEG (45.0/atan(1))

int main()
{
	double w, h, r, theta;
	
	cout << "밑변을 입력하시오: ";
	cin >> w;

	cout << "높이를 입력하시오: ";
	cin >> h;
	
	r = sqrt(w * w + h * h);
	theta = RAD_TO_DEG * atan2(h, w);
	
	cout << "빗변= " << r << " 각도= " << theta << endl;
	
	return 0;
