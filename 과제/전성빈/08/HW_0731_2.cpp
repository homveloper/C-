#include <iostream>
#include <string>
using namespace std;

class Point {
private:
	int x1;
	int y1;

public:
	void SettingPoint(int x2, int y2);

	void Show_Point();
};

void Point::SettingPoint(int x2, int y2) {
	x1 = x2;
	y1 = y2;
}

void Point::Show_Point() {
	cout << "[ " << x1 << "," << y1 << " ]" << endl;


}
int main(void) {
	int x1;
	int y1;
	Point point_1;
	point_1.SettingPoint(12,4);
	point_1.Show_Point();

}