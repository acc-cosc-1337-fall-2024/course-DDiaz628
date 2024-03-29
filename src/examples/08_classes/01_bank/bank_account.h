//bank_account.h
#include <iostream>
#include <stdlib.h>//Access to rand() function

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{

public: //other regions of code, test, other function, other class can see
    BankAccount(){}//Default Constructor
    BankAccount(int b) : balance(b){/*empty code block*/}
    
    int get_balance(){return balance;}
    void deposit(int amount);
    void withdraw(int amount);

private://only BankAccount can read/write to balance directly
    int balance{0}; //Initialize balance to 0 on class creation    
    void get_balance_from_db();
};

#endif

/*void display_menu();
void run_menu(BankAccount& account);
void handle_menu(int choice, BankAccount& account);
*/