#include <iostream>
#include "casting.h"

using std::cin; using std::cout;

int main()
{
    auto years = 0;
    auto rate = 1.0;

    cout<<"enter years: ";
    cin>>years;
    cout<<"enter rate: ";
    cin>>rate;

    auto result = convert_to_double(years,rate);

    cout<<"value is: "<<result<<"\n";

    return 0;
}