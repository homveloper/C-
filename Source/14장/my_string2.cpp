class String {
	char *s;
public:
	String(char *p){
		s = new char[strlen(p)+1];
		strcpy(s, p);
	}
	virtual ~String(){
		cout << "String() 소멸자" << endl;
		delete[] s;
	}
};
class MyString : public String {
	...// 앞과 동일
};

int main()
{
	...// 앞과 동일
}
