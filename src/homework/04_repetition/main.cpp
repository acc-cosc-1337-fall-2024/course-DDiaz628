#include "repetition.h"

//write include statements
using std::cout; using std::cin;
//write using statements

int main() 
{
	int option = 0;
	int exit = 0;
	int num, num1, num2;
	int result_factorial, result_gcd;
	
	do
	{
		cout<<"\tMain Menu\n";
		cout<<"1-Factorial\n";
		cout<<"2-Greatest Common Divisor\n";
		cout<<"3-Exit\n";
		cin>>option;

		if(option == 1)
		{
			cout<<"\nEnter value for Factorial: \n";
			cin>>num;
			result_factorial = factorial(num);
			cout<<"Factorial of "<<num<<" is: "<<result_factorial<<"\n\n";
		}

		else if(option == 2)
		{
			cout<<"\nEnter 2 values for Greatest Common Divisor: \n";
			cin>>num1>>num2;
			result_gcd = gcd(num1, num2);
			cout<<"Greatest Common Divisor between "<<num1<<" and "<<num2<<" is: "<<result_gcd<<"\n\n";
		}

		while(option == 3)
		{
			cout<<"\nAre you sure you want to exit?\n";
			cout<<"1-Yes\n2-No\n";
			cin>>exit;
			
			if (exit == 1)
			{
				cout<<"\nGoodbye\n";
				break;
			}

			else if(exit == 2)
			{
				option = 0;
				cout<<"\nReturn to Main Menu\n\n";
				exit = 0;

			}

			else
			{
				cout<<"Invalid option\n";
			}

		}
		
	} while (option !=3);
	

	return 0;
}
