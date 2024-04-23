//customer.h
#include <string>
#include <vector>
#include <memory>
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
//#include "bank_DB.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
public:
    Customer(int id, std::string n);
     Customer(int checking, int savings);
    std::unique_ptr<BankAccount>& get_account(int index){return accounts[index];}
private:
    int customer_id;
    std::string name;
    std::vector<std::unique_ptr<BankAccount>> accounts;

};


#endif