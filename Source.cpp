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
	std::cout << "������� ����� ������" << std::endl;
	std::cin >> amount1.amount;
	return amount1.amount;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	bank_account first;
	std::cout << "������� ����� �����" << std::endl;
	std::cin >> first.number;
	std::cout << "������� ��� ���������" << std::endl;
	std::cin >> first.name;
	std::cout << "������� ������" << std::endl;
	std::cin >> first.amount;
	bank_account_function(first);
	std::cout << "��� ����: " << first.name << " " << first.number << " " << first.amount;

}

