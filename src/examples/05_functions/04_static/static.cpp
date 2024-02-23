#include "static.h"

using std::cout;

void use_none_static_variable()
{
    int num = 5;
    num++;
    cout<<num<<"\n";
}

void use_static_variable()
{
    static int num = 5;
    num++;
    cout<<num<<"\n";
}

void use_static_variable1()
{
    static int num = 5;
    num++;
    cout<<num<<"\n";
}

double get_gross_pay(int hours, double rate)
{
    return hours * rate;
}

double get_gross_pay(int yearly_salary)
{
    return yearly_salary / 12;
}