#include "main.h"
#include <iostream>
#include <string>
#include <Windows.h>

struct BankAccount {
	int accountNum;
	std::string holderName;
	double accountBalance;
};

void ChangeBankAmount(BankAccount* account, double newAmount) {
	account->accountBalance = newAmount;
}

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	BankAccount* newAccount = new BankAccount;

	std::cout << "������� ����� �����: ";
	std::cin >> newAccount->accountNum;

	std::cout << "������� ��� ���������: ";
	std::cin >> newAccount->holderName;

	std::cout << "������� ������: ";
	std::cin >> newAccount->accountBalance;

	double newAmount;
	std::cout << "������� ����� ������: ";
	std::cin >> newAmount;
	
	ChangeBankAmount(newAccount, newAmount);

	std::cout << "��� ����: " << newAccount->holderName << ", "
		<< newAccount->accountNum << ", "
		<< newAccount->accountBalance;

	delete newAccount;
}
