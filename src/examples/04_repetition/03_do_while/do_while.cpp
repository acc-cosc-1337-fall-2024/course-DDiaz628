#include "do_while.h"

using std::cout; using std::cin;

int sum_of_sqares_do(int num)
{
    auto sum = 0;
    auto i = 0;

    do
    {
        sum = sum + i * i;
        i+= 1;
    } while (i <= num);
    

    return sum;
}

void display_numbers_do(int num)
{
    auto i = 0;

    do
    {
        cout<<i++<<"\n";
        i++;
    } while (i < num);
    
}

void display_str_do(string str)
{
    auto i = 0;

    do
    {
        cout<<str[i]<<"\n";
        i++;
    } while (i < str.size());
    

}
//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto choice = 'y';
    auto option = -1;

    do
    {
        cout<<"Enter option: ";
        cin>>option;
        handle_menu_option(option);
        
        cout<<"Enter n to exit, y to continue ";
        cin>>choice;
        
    } while (choice == 'y' || choice == 'Y');
    
}

void run_menu()
{
    cout<<"1-Accounts Payable\n";
    cout<<"2-Accounts Receivable\n";
    cout<<"3-Payroll\n";
    cout<<"4-Exit\n";
}

void handle_menu_option(int num)
{
    switch(num)
    {
        case 1:
            cout<<"Display AP Page\n";
            break;
        case 2:
        cout<<"Display AR page\n";
            break;
        case 3:
            cout<<"Display Payroll page\n";
            break;
        case 4:
            cout<<"Exit\n";
            break;
        default:
            cout<<"Invalid Option\n";
            break;
    }
}
