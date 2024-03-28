#include "atm.h"
#include "bank_account.h"
#include <iostream>

using std::cout;


int main()
{
	//assume other class retrieved balance from database


	BankAccount account(500); //create variable/object

	ATM atm(account);

	run_menu(atm);

	cout<<"Balance: "<< account.get_balance()<<"\n";

	return 0;
}