//atm.h

#include "bank_account.h"
#include <iostream>

#ifndef ATM_H
#define ATM_H

using std::cout; using std::cin;

class ATM
{
public:
    ATM(BankAccount& b) : account(b){}
    void display_balance();
    void make_deposit();
    void make_withdraw();


private:
    BankAccount& account;
};

#endif

void display_menu();
void run_menu(ATM& atm);
void handle_menu(int choice, ATM& atm);