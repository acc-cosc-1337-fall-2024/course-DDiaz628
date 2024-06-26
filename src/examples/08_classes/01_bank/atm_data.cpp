#include "atm_data.h"

using std::ofstream;  using std::ifstream; using std::vector; using std::cout;

void ATMData::save_customers(vector<Customer>& customers)
{
    ofstream out;

    out.open(file_name);

    for(auto& customer: customers)
    {
        out<<customer.get_account(0)->get_balance();//checking
        out<<" ";
        out<<customer.get_account(1)->get_balance();//savings
        out<<"\n";
    }
}

vector<Customer>& ATMData::get_customers()
{
    customers.clear();

    ifstream in;
    in.open(file_name);

    auto checking_balance = 0;
    auto savings_balance = 0;

    if(in.is_open())
    {
        while(in>>checking_balance>>savings_balance)
        {
            customers.push_back(Customer(checking_balance, savings_balance));
        }
    }
    else
    {
        cout<<"cannot open the file\n";
    }

    return customers;
}