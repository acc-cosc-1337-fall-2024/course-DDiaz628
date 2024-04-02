#include "ref_pointers.h"

//
void ref_param(int& num)
{
    num = 20;
}

void ptr_param(int* num)
{
    *num = 30;
}

