#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	int isbn;
	string title;
public:
	Book(int isbn, string& title) { 
		this->isbn = isbn;
		this->title = title;
	}
	Book(int isbn) {
		this->isbn = isbn;
		this->title = "unknown";
	}
	operator int() const
	{
		return isbn;
	}

	void display() {
		cout << isbn << ":" << title << endl;
	}
};

bool check(int isbn)
{
	cout << isbn << endl;
	return true;
}

int main()
{
	Book b1 = 9782001;	// 변환 생성자 실행!
	b1.display();
	int isbn = b1;	// 변환 연산자 실행!
	cout << isbn << endl;
	check(b1);		// 변환 연산자 실행!

	return 0;
}
