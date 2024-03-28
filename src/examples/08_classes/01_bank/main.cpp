#include "atm.h"
#include "bank_account.h"
#include <iostream>
#include <time.h>

using std::cout;


int main()
{
	srand(time(NULL));
	//assume other class retrieved balance from database


	BankAccount account; //create variable/object
	cout<<account.get_balance()<<"\n";

	BankAccount account2; //create variable/object
	cout<<account2.get_balance()<<"\n";

	/*ATM atm(account);

	run_menu(atm);

	cout<<"Balance: "<< account.get_balance()<<"\n";
	*/

	return 0;
}