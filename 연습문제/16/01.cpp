/*
1. 은행 예금을 나타내는 BankAccount 클래스를 작성한다. 
BankAccount는 잔액(balance)를 나타내는 멤버 변수를 가지며 
입금을 나타내는 deposit()과 출금을 나타내는 withdraw()를 
멤버 함수로 가진다. 기타 필요한 생성자, 설정자, 접근자를 
추가하라. withdraw()에서는 인출 금액이 잔액보다 크면 
NegativeBalance라는 이름의 예외를 발생하도록 하라. 
NegativeBalance는 별도의 클래스로 정의한다. BankAccount 
객체를 main()안에서 생성하여서 테스트하라. try/catch문을 
이용하여서 예외를 처리하도록 하라.
*/

#include <iostream>
using namespace std;

class NegativeBalance
{
private:
    int balanceDue;

public:
    NegativeBalance(int balanceDue)
    {
        this->balanceDue = balanceDue;
    }

    void print()
    {
        cerr << "부족액 : " << balanceDue << endl;
    }
};

class BankAccount
{
private:
    int balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void print();
    void deposit(int money);
    int withdraw(int money);
};

void BankAccount::print()
{
    cout << "잔액 : " << balance << endl;
}

void BankAccount::deposit(int money)
{
    balance += money;
}

int BankAccount::withdraw(int money)
{
    if (balance - money < 0)
        throw NegativeBalance(balance - money);

    return balance -= money;
}

void main()
{
    BankAccount bankAccount;

    try
    {
        bankAccount.deposit(1000);
        bankAccount.print();

        bankAccount.withdraw(2000);
        bankAccount.print();
    }
    catch (NegativeBalance e)
    {
        e.print();
    }
}
