#include "dynamic_memory.h"
#include<iostream>

//

void use_unique_ptr()
{
    unique_ptr<int> num = make_unique<int>(5);
	cout<<*num<<"\n";
}