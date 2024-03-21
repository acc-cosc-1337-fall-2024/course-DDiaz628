//bank_account.cpp
#include "bank_account.h"

using std::cout; using std::cin;

//These functions are part of BankAccount class
void BankAccount :: deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

//End of code block belonging to BankAccount

//Frewe function - not part of class
void display_menu()
{
    cout<<"\n1- Display balance\n";
    cout<<"\n2- Deposit\n";
    cout<<"\n4- Exit\n";
}

void run_menu(BankAccount& account)
{
    auto menu_choice = 0;

    do
    {
        display_menu();
        cout<<"Enter option:\n";
        cin>>menu_choice;
        handle_menu(menu_choice, account);

    } while (menu_choice != 4);
    
}

void handle_menu(int choice, BankAccount& account)
{
    auto amount = 0;

    switch (choice)
    {
        case 1:
            cout<<"\n"<<account.get_balance()<<"\n";
            break;
        
        case 2:
            cout<<"\nEnter Deposit amount:\n";
            cin>>amount;
            account.deposit(amount);
            break;

        case 4:
            cout<<"Exiting...\n";
            break;

        default:
            break;
    }
}

