//customer.cpp
#include "customer.h"
using std::make_unique;

Customer::Customer(int id, std::string n)
{
    accounts.push_back(make_unique<CheckingAccount>(500));
    accounts.push_back(make_unique<SavingsAccount>(100));
}

Customer::Customer(int checking, int savings)
{
    accounts.push_back(make_unique<CheckingAccount>(checking));
    accounts.push_back(make_unique<SavingsAccount>(savings));
}