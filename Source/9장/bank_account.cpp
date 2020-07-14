#include <iostream>
#include <string>
using namespace std;

class BankAccount {		// 은행 계좌
private:
	int accountNumber;	// 계좌 번호
	string owner;		// 예금주
	int balance;		// 잔액을 표시하는 변수

public:
	void setBalance(int amount);	// balance에 대한 설정자
	int getBalance();		// balance에 대한 접근자
	void deposit(int amount);	// 저금 함수
	void withdraw(int amount);	// 인출 함수
	void print();			// 현재 상태 출력
};

void BankAccount::setBalance(int amount) 
{ 
	balance = amount;
}

int BankAccount::getBalance() 
{ 
	return balance;
}

void BankAccount::deposit(int amount) 
{ 
	balance += amount;
}

void BankAccount::withdraw(int amount)
{ 
	balance -= amount;
}

void BankAccount::print()
{
	cout << "잔액은 " << balance << "입니다." << endl;
}

int main() {
	BankAccount account;

	account.setBalance(0);
	account.deposit(10000);
	account.print();
	account.withdraw(8000);
	account.print();

	return 0;
}
