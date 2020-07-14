class Student {
	char *name; // 이름
	int number;
public:
	// 첫 번째 생성자
	Student(char *pn, int n) {
		name = new char[strlen(pn)+1];
		strcpy(name, pn);
		number = n;
	}
	Student(Student& s) {
		name = new char[strlen(s.name)+1];
		strcpy(name, s.name);
		number = s.number;
	}
	~Student() {
		delete [] name;
	}
	char *getName()
	{
		return name;
	}
	int getNumber()
	{
		return number;
	}
};
void displayStudent(Student obj)
{
	cout << "이름: " << obj.getName() << endl;
	cout << "학번: " << obj.getNumber() << endl;
}

int main()
{
	Student s1("Park", 20100001);
	displayStudent(s1);
	return 0;
}
