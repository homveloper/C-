#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	int isbn;	// 책의 ISBN
	string title;	// 책의 제목
public:
	Book() { // 생성자
		isbn = 0;
		title = “unknown";
	}
	Book(int isbn) {		
		this->isbn = isbn;
		this->title = "unknown";

	}
	void display() {
		cout << isbn << ":" << title << endl;
	}
};

int main()
{
	Book b1 = 9782001;	// int 타입을 Book 타입에 대입
	b1.display();
	b1 = 9783001;	// 가능
	b1.display();
	return 0;
}
