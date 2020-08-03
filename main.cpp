#include <iostream>
#include <string>
using namespace std;

class Product {
private:
	int id;
	string name;
	int price;

public:
	void input();
	void print();
	bool isCheaper(Product other);
};

void Product::input()
{
	cout << "상품의 일련 번호: ";
	cin >> id;
	cout << "상품의 이름: ";
	cin >> name;
	cout << "상품의 가격: ";
	cin >> price;
}

void Product::print()
{
	cout << " 상품 번호 " << id << endl
		<< " 상품의 이름: " << name 
		<< " 상품의 가격: " << price << endl;
}

bool Product::isCheaper(Product other)
{
	if( price < other.price) 
		return true;
	else 
		return false;
}

int main() 
{
	string s1 = "dd";

	cout<<&s1<<endl;
	cout<<s1<<endl;

	s1.clear();

	return 0;
}