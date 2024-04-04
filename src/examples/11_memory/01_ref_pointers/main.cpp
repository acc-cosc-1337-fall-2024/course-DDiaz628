#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	//create memory
	int*num = new int (5);//create memory allocation on heap

	//use memory
	cout<<*num<<"\n";

	//delete/free memory
	delete num;
	
	
	
	
	
	
	/*int num1 = 5, num2 = 10;
	int* num_ptr; //don't have to point at anything
	cout<<"Address of num1: "<<&num1<<"\n";

	num_ptr = &num1;
	cout<<"Address othat num_pte points to: "<<num_ptr<<"\n";
	cout<<"Value of the variable mum_ptr points to: "<<*num_ptr<<"\n";

	num_ptr = &num2;
	cout<<*num_ptr<<"\n";
	*/

	/*int num1 = 5;
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
	*/
	
	return 0;
}