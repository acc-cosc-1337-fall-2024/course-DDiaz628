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

void BankAccount::withdraw(int amount)
{
     if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

/*
void BankAccount::get_balance_from_db()
{
    balance = rand() % 10000 + 1;
}
*/

int BankAccount::get_balance()
{
    return balance;
}

//End of code block belonging to BankAccount

//Frewe function - not part of class
/*void display_menu()
{
    cout<<"\n1- Display balance\n";
    cout<<"\n2- Deposit\n";
    cout<<"\n3- Withdraw\n";
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
            cout<<"\nBalance: "<<account.get_balance()<<"\n";
            break;
        
        case 2:
            cout<<"\nEnter Deposit amount:\n";
            cin>>amount;
            account.deposit(amount);
            break;

        case 3:
            cout<<"\nEnter Withdraw amount:\n";
            cin>>amount;
            account.withdraw(amount);
            break;

        case 4:
            cout<<"Exiting...\n";
            break;

        default:
            break;
    }
}
*/

