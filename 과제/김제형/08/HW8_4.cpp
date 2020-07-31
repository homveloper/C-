#include <iostream>
#include <string>

using namespace std;

class Login
{
private:
public:
    string ID, PASSWORD, PASSWORD2, LOGIN_ID, LOGIN_PASSWORD;
    void create_account()
    {
        cout << "Create Account" << endl;
        cout << "Enter the ID" << endl;
        getline(cin, ID);
        cout << "Your ID is " << ID << endl
             << endl;
        cout << "Enter the PASSWORD" << endl;
        getline(cin, PASSWORD);
        cout << "Enter the PASSWORD again." << endl;
        getline(cin, PASSWORD2);
        PASSWORD == PASSWORD2 ? cout << "Done"<<endl : cout << "Check the password.";
    }
    void backspace(int i)
    {
        for (int j = 0; j < i; j++)
        {
            printf("\b");
        }
    }
    void login()
    {
        cout << "ID : ________";
        backspace(8);
        getline(cin, LOGIN_ID);
        cout << "PW : ________";
        backspace(8);
        getline(cin, LOGIN_PASSWORD);
        ID == LOGIN_ID ? (PASSWORD == LOGIN_PASSWORD ? cout<<"access" : cout<<"fail") : cout<<"g";
    }
};

void main()
{
    Login l;
    l.create_account();
    l.login();
}