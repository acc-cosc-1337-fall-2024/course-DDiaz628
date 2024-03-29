#include "atm.h"
#include "bank_account.h"
#include <iostream>
#include <time.h>
#include "bank_DB.h"

using std::cout;


int main()
{
	srand(time(NULL));
	//assume other class retrieved balance from database
	BankDB bankDB;

	BankAccount account(bankDB.retrieve_balance()); //create variable/object
	

	ATM atm(account);
	run_menu(atm);

	//BankAccount account2; //create variable/object
	//cout<<account2.get_balance()<<"\n";
	
	cout<<"\n"<<account.get_balance()<<"\n";
	/*ATM atm(account);

	run_menu(atm);

	cout<<"Balance: "<< account.get_balance()<<"\n";
	*/

	return 0;
}