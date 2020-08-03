//// �������� 2.2���� �������� ���� ��Ÿ���� Ŭ���� Point�� ������.
////���� �ʿ��� ��� ����(�ʵ�)�� ��� �Լ�(�޼���)�� �����Ͽ� �����غ���.
#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	void ShowPosition();
	void change_point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

void Point::ShowPosition()
{

	for (int j = 0; j < y; j++)
		cout << '\n';

	for (int i = 0; i < x; i++)
			cout <<"  ";

	cout << "*" << endl;
}

int main()
{
	Point point;
	int x, y;
	cout << "좌표를 입력해주세요." << endl;
	cin >> x >> y;
	cout << "x : " << x << ", y : " << y << endl;

	point.change_point(x, y); // �޼����Լ� : �ܺο��� private�Լ��� �ٲ� �� ����
	point.ShowPosition();
}
