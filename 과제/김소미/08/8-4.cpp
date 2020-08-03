 //�������� 4.����ڷκ��� ���̵�� �н����带 �޾Ƽ� ��ġ�ϴ��� �˻��ϴ� ���α׷��� �ۼ��غ���.

#include <iostream>
#include <string>
using namespace std;

void main() {
	string ID = "20160239";
	string PW = "51678737";
	cout << "���̵�� : " << ID << endl;
	cout << "��й�ȣ�� : " << PW << endl;

	string cinID;
	string cinPW;

	cout << "���̵�� ��й�ȣ�� �Է��ϼ���." << endl;
	getline(cin, cinID);
	getline(cin, cinPW);

	cout << "(ID�� ������ 0, Ʋ���� 1 or -1 �Դϴ�) : " << ID.compare(cinID) << endl;
	cout <<"(PW�� ������ 0, Ʋ���� 1 or -1 �Դϴ�) : "<< PW.compare(cinPW) << endl;
}