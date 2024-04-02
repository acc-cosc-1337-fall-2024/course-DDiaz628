//checking_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount : public BankAccount
{
    public:
        CheckingAccount(){std::cout<<"Default constructor fired: \n";}
        CheckingAccount(int b) : BankAccount(b){std::cout<<"Constructor with balance param fired";}
    private:

};


#endif