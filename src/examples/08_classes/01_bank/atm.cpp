//atm.cpp

#include "atm.h"

void ATM::display_balance()
{
    auto& customer = customers[customer_index];
    
    auto& account = customer.get_account(account_index);
    cout<<"Balance: "<<account->get_balance();
    //cout<<"Balance: "<<account.get_balance();
}

void ATM::make_deposit()
{
    auto& customer = customers[customer_index];
    
    cout<<"\nEnter Deposit amount:\n";
    auto amount = 0;
    cin>>amount;

    auto& account = customer.get_account(account_index);
    account->deposit(amount);
    //account.deposit(amount);
}

void ATM::make_withdraw()
{
    auto& customer = customers[customer_index];

    cout<<"\nEnter withdraw amount:\n";
    auto amount = 0;
    cin>>amount;
    
    auto& account = customer.get_account(account_index);
    account->withdraw(amount);
    
    //account.withdraw(amount);
}

void ATM::swipe_card()
{
    customer_index = rand() % customers.size();
    cout<<"Enter 1- Checking 2- Savings: ";
    cin>>account_index;
    account_index -= 1;
}



void display_menu()
{
    cout<<"\n1- Display balance\n";
    cout<<"\n2- Deposit\n";
    cout<<"\n3- Withdraw\n";
    cout<<"\n4- Exit\n";
}

void run_menu(ATM& atm)
{
    auto menu_choice = 0;
    //auto choice = -1;

    do
    {
        atm.swipe_card();
        
        do
        {
            display_menu();
            cout<<"Enter option:\n";
            cin>>menu_choice;
            handle_menu(menu_choice, atm);

        } while (menu_choice != 4);

    } while(true);

    
    
}

void handle_menu(int choice, ATM& atm)
{

    switch (choice)
    {
        case 1:
            atm.display_balance();
            break;
        
        case 2:
            atm.make_deposit();
            break;

        case 3:
            atm.make_withdraw();
            break;

        case 4:
            cout<<"Exiting...\n";
            break;

        default:
            break;
    }
}