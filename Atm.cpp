#include <iostream>
using namespace std;

void showmenu() {
	cout << "********MENU********\n";
	cout << "1. Check balance"<<endl;
	cout << "2. Deposit"<<endl;
	cout << "3. Withdraw"<<endl;
	cout << "4. Exit";
	cout << "********************\n";
}

int main()
{
	//Check balance, deposit, withdraw and show menu.

	int option;
	double balance=500;
	double depositAmount;
	double withdrawAmount;

	do
	{
	showmenu();

	cout << "Option: ";
	cin >> option;
	system("cls");
	switch (option)
	{
	case 1: cout << "Balance is: " << balance << endl; break;
	case 2: cout << "Deposit amount:";
		cin >> depositAmount;
		balance += depositAmount; break;
	case 3: cout << "Withdraw amount:";
		cin >> withdrawAmount;
		if (withdrawAmount <= balance)
			balance -= withdrawAmount;
		else
			cout << "Not enough money"; break;
	// default: cout << "Invalid input";
	}
	} while (option != 4);

	system("pause>0");
}