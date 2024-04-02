#include "atm.h"
#include "bank_account.h"
#include <iostream>
#include <time.h>
#include "bank_DB.h"
#include "checking_account.h"
#include "savings_account.h"

using std::cout;


int main()
{
	srand(time(NULL));

	BankAccount account;
	cout<<account.get_balance()<<"\n";

	SavingsAccount savings;
	cout<<savings.get_balance()<<"\n";


	//assume other class retrieved balance from database
	//BankDB bankDB;

	//BankAccount account; //create variable/object
	//BankAccount account1(500);

	//CheckingAccount account;
	//CheckingAccount account1(500);
	

	//ATM atm(account);
	//run_menu(atm);

	//BankAccount account2; //create variable/object
	//cout<<account2.get_balance()<<"\n";
	
	//cout<<"\n"<<account.get_balance()<<"\n";
	/*ATM atm(account);

	//run_menu(atm);

	cout<<"Balance: "<< account.get_balance()<<"\n";
	*/

	return 0;
}