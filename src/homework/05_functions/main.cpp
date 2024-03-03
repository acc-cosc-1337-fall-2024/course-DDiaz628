#include "func.h"

int main() 
{
	int option = 0;
	int exit = 0;
	string dna = "";
	double result_gc = 0;
	string result_dna_complement = "";
	
	do
	{
		cout<<"\tMain Menu\n";
		cout<<"1-Get GC Content\n";
		cout<<"2-Get DNA Complement\n";
		cout<<"3-Exit\n";
		cin>>option;

		if(option == 1)
		{
			cout<<"\nEnter DNA string: \n";
			cin>>dna;
			result_gc = get_gc_content(dna);
			if(result_gc == -1)
			{
				cout<<"\nInvalid DNA string.\n\nReturning to Main Menu\n\n";
			}

			else
			{
				cout<<"\nGC content of "<<dna<<" is: "<<result_gc<<"\n\nReturning to Main Menu\n\n";
			}
		}

		else if(option == 2)
		{
			cout<<"\nEnter DNA string: \n";
			cin>>dna;
			result_dna_complement = get_dna_complement(dna);

			if(result_dna_complement == "0")
			{
				cout<<"\nInvalid DNA string.\n\nReturning to Main Menu\n\n";
			}

			else
			{
				cout<<"\nDNA complement for "<<dna<<" is "<<result_dna_complement<<"\n\nReturning to Main Menu\n\n";
			}
		}

		else if(option !=1 && option !=2 && option != 3)
		{
			cout<<"\nInvalid option\n\n";
		}

		while(option == 3)
		{
			cout<<"\nAre you sure you want to exit?\n";
			cout<<"1-Yes\n2-No\n";
			cin>>exit;
			
			if (exit == 1)
			{
				cout<<"\nHave a good day!\n";
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
				cout<<"\nInvalid option\n";
			}

		}
		

	} while (option != 3);
	

	return 0;
}
