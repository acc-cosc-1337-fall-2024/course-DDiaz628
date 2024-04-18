//bank_account.h
#include <iostream>
#include <stdlib.h>//Access to rand() function

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount//abstract
{

public: //other regions of code, test, other function, other class can see
    BankAccount(){std::cout<<"BankAccount Default constructor fired: \n";}//Default Constructor
    BankAccount(int b) : balance(b){std::cout<<"Constructor with balance param fired\n";}
    
    virtual int get_balance() = 0;
    //virtual int get_balance(){std::cout<<"Bank get balance: "; return balance;}
    void deposit(int amount);
    void withdraw(int amount);

protected:
int balance{0}; //Initialize balance to 0 on class creation  

private://only BankAccount can read/write to balance directly
      
    //void get_balance_from_db();
};

#endif

/*void display_menu();
void run_menu(BankAccount& account);
void handle_menu(int choice, BankAccount& account);
*/