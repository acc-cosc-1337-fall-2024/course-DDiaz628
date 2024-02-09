#include<iostream>
#include "switch.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	auto option = 0;
	string result = "";

	cout<<"Enter an option: ";
	cin>>option;

	result = menu(option);

	cout<<result<<"\n";
	
	

	return 0;
}