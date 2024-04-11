//atm.h

#include "bank_account.h"
#include "customer.h"
#include <iostream>
#include <vector>
#include <stdlib.h>

#ifndef ATM_H
#define ATM_H

using std::cout; using std::cin;

class ATM
{
public:
    ATM(std::vector<Customer>& c) : customers(c){}
   // ATM(BankAccount& b) : account(b){}
    void display_balance();
    void make_deposit();
    void make_withdraw();
    void swipe_card();

private:
    std::vector<Customer>& customers;
    int customer_index; //Current customer from customers vector at atm
    int account_index; //current customer account in use (check/save)
    //BankAccount& account;
};

#endif

void display_menu();
void run_menu(ATM& atm);
void handle_menu(int choice, ATM& atm);