#include <iostream>
#include <string>
using namespace std;

int main() {
	string ID = "JSB";
	string password = "1234";

	string Entered_ID;
	string Entered_password;

	cout << "enter the id, password" << endl;

	getline(cin, Entered_ID);
	getline(cin, Entered_password);

	cout << (ID.compare(Entered_ID) ? "deny" : "access") << "  " << password.compare(Entered_password) << endl;
}
