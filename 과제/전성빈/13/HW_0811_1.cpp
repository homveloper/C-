#include <iostream>
#include <string>
#include <HW_0811_2.h>
using namespace std;

class Book {
protected:
	string TITLE;
	int Page_Number;
	string Author;

public:
	Book(string title, int PN, string Au){
		this->TITLE = title;
		this->Page_Number = PN;
		this->Author = Au;
	}

	void setTitle() {
	}
	void setPage_Number() {
	}
	void setAuthor() {
	}
};

class Magazine : public Book{
	string Release_Date;
public:
	Magazine(string title, int Page_Number, string Author, string RD) : Book(TITLE, Page_Number, Author) {
		this->Release_Date = RD;
	}

	Magazine(Book book, string releaseDate) : Book(book){
		this->Release_Date = releaseDate;
	}

	void setRelease_Date() {
	}
};

void main() {
	Magazine magazine("Grazia", 100, "Seoul", "140305");

	Student student;
}