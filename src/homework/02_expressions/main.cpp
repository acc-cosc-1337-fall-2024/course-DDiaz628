//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout;
using std::cin;


int main()
{
	
	double meal_amount = 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;
	double total = 0;

	cout<<"Enter the meal amount: \n";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter the tip_rate: \n";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	cout<<"Here is your receipt: \n"<<"\tMeal amount:\t"<<meal_amount<<"\n\tSales Tax:\t"<< tax_amount<<"\n\tTip Amount:\t"<<tip_amount;
	cout<<"\n\tTotal:\t\t"<<total<<"\n";


	return 0;
}
