//atm.cpp

#include "atm.h"

void ATM::display_balance()
{
    cout<<"Balance: "<<account.get_balance();
}

void ATM::make_deposit()
{
    cout<<"\nEnter Deposit amount:\n";
    auto amount = 0;
    cin>>amount;
    account.deposit(amount);
}

void ATM::make_withdraw()
{
    cout<<"\nEnter withdraw amount:\n";
    auto amount = 0;
    cin>>amount;
    account.withdraw(amount);
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

    do
    {
        display_menu();
        cout<<"Enter option:\n";
        cin>>menu_choice;
        handle_menu(menu_choice, atm);

    } while (menu_choice != 4);
    
}

void handle_menu(int choice, ATM& atm)
{
    auto amount = 0;

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