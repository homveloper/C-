//��������1.�Ϲ����� å�� ��Ÿ���� Book Ŭ������ ��� �޾Ƽ� ������ ��Ÿ���� Magazine Ŭ������ �ۼ��Ͽ� ����.
//Book Ŭ������ ����, ��������, ���� ���� ������ ������. Magazine Ŭ������ �߰������� �߸��� ������ ������.

#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
	string name;
	string author;
	int page;
public:
	void setName(string bookname) {
		name = bookname;
	}
	void setAuthor(string Authorname) {
		author = Authorname;
	}
	void setPage(int Page) {
		page = Page;
	}
	void print() {
		cout << "å ���� : " << name << endl;
		cout << "���� : " << author << endl;
		cout << "�������� : " << page << endl;
	}
};


class Magazine : public Book {
	int year, month, day;
public:
	Magazine(int y = 0, int m = 0, int d = 0) : year(y), month(m), day(d) {
		cout << "�߸����� " << year << "��" << month << "�� " << day << "�� �Դϴ�." << endl;
	}

	/*void setDate(int Date) {
		date = Date;
	}*/
};

int main() {
	Magazine m;
	m.setName("What a beautiful life");
	m.setAuthor("KIM SOMI");
	m.setPage(153);
	m.print();
}