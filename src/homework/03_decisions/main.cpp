#include <iostream>
#include "decisions.h"

using std::cout; using std::cin; using std::string;

//write include statements

//All comments from this point are other ways I could have done program

int main() 
{
	int grade = 0;
	//string option = "";
	int cond_opt = 0;
	char letter = ' ';


	cout<<"\tMAIN MENU\n";
	cout<<"1-Letter grade using if"<<"\n";
	cout<<"2-Letter grade using switch"<<"\n";
	cout<<"3-Exit"<<"\n";
	//cin>>option;
	cin>>cond_opt;

	//option = condition_choice(cond_opt);

    switch(cond_opt)
    {
        case 1:
            cout<<"\n\tLetter grade using if\nEnter grade: ";
		    cin>>grade;

		    letter = get_letter_grade_using_if(grade);

		    cout<<letter<<"\n";

            break;
        case 2:
            cout<<"\n\tLetter grade using switch\nEnter grade: ";
		    cin>>grade;

		    letter = get_letter_grade_using_switch(grade);

		    cout<<letter<<"\n";

            break;
        case 3:
            cout<<"\n\tExit\n ";
            break;
        default:
            cout<<"\nInvalid Option\n";
            break;
    }
	


	/*if (option == "1")
	{
		cout<<"Enter grade: ";
		cin>>grade;

		letter = get_letter_grade_using_if(grade);

		cout<<letter<<"\n";
	}
	else if (option == "2")
	{
		cout<<"Enter grade: ";
		cin>>grade;

		letter = get_letter_grade_using_switch(grade);

		cout<<letter<<"\n";
	}

	else if (option == "3")
	{
		cout<<"Exit\n";
	}

	else
	{
		cout<<"Invalid Option\n";
	}
	*/


	return 0;
}