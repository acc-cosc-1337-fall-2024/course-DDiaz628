#include "atm.h"
#include "bank_account.h"
#include <iostream>
#include <time.h>
#include "bank_DB.h"
#include "checking_account.h"
#include "savings_account.h"
#include <vector>

using std::cout; using std::vector;


int main()
{
	vector<BankAccount*> accounts;
	
	srand(time(NULL));
	CheckingAccount checking;
	SavingsAccount savings;
	//savings.get_balance();
	//BankAccount* ptr = &savings;
	//ptr->get_balance();
	
	accounts.push_back(&checking);
	accounts.push_back(&savings);

	cout<<accounts[0]->get_balance()<<"\n";//checkings
	cout<<accounts[1]->get_balance()<<"\n";//savings
	//cout<<savings.get_balance()<<"\n";

	/*inheritence + pointer + virtual function = polymrphism- BankAccount will behave as SavingsAccount at runtime
	BankAccount* account_ptr;
	SavingsAccount savings;
	account_ptr = &savings;.

	cout<<account_ptr->get_balance()<<"\n";
	*/

	/*
	vector<BankAccount> accounts;
	
	srand(time(NULL));
	CheckingAccount checking;
	SavingsAccount savings;
	
	accounts.push_back(checking);
	accounts.push_back(savings);

	cout<<accounts[0].get_balance()<<"\n";//checkings
	cout<<accounts[1].get_balance()<<"\n";//savings
	cout<<savings.get_balance()<<"\n";
	*/
	
	
	
	//BankAccount account;
	
	
	//cout<<account.get_balance()<<"\n";

	//SavingsAccount savings;
	//cout<<savings.get_balance()<<"\n";


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