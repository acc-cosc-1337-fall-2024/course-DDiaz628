#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num1 = 5;
	int& num1_ref = num1;

	cout<<num1_ref<<"\n";
	num1_ref = 10;

	cout<<num1_ref<<"\n";
	cout<<num1<<"\n";

	int num2 = 5;
	int* num2_ptr = &num2;
	cout<<*num2_ptr<<"\n";

	*num2_ptr = 10;
	cout<<*num2_ptr<<"\n";
	cout<<num2<<"\n";
	
	return 0;
}