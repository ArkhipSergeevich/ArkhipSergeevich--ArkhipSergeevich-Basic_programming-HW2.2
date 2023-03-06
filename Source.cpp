#include <iostream>
#include <string>
struct bank_account
{
	int number;
	std::string name;
	double amount;
};
double bank_account_function(bank_account& amount1)
{
	std::cout << "¬ведите новый баланс" << std::endl;
	std::cin >> amount1.amount;
	return amount1.amount;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	bank_account first;
	std::cout << "¬ведите номер счета" << std::endl;
	std::cin >> first.number;
	std::cout << "¬ведите им€ владельца" << std::endl;
	std::cin >> first.name;
	std::cout << "¬ведите баланс" << std::endl;
	std::cin >> first.amount;
	bank_account_function(first);
	std::cout << "¬аш счет: " << first.name << " " << first.number << " " << first.amount;

}

