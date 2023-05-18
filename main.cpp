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

	std::cout << "¬ведите номер счЄта: ";
	std::cin >> newAccount->accountNum;

	std::cout << "¬ведите им€ владельца: ";
	std::cin >> newAccount->holderName;

	std::cout << "¬ведите баланс: ";
	std::cin >> newAccount->accountBalance;

	double newAmount;
	std::cout << "¬ведите новый баланс: ";
	std::cin >> newAmount;
	
	ChangeBankAmount(newAccount, newAmount);

	std::cout << "¬аш счЄт: " << newAccount->holderName << ", "
		<< newAccount->accountNum << ", "
		<< newAccount->accountBalance;

	delete newAccount;
}
