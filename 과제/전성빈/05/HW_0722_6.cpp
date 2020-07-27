#include <iostream>
#include <math.h>
using namespace std;

int n;

int cubing(int n) {
	if (n == 1) return 1;
	return  pow(n,3) + cubing(n-1);
}

int main() {
	cout << "n을 입력하세요" << endl;
	cin >> n;
	cout <<"입력 ."<< endl;
}