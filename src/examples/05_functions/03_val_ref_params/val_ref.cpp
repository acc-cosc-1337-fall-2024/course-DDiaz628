#include "val_ref.h"

void value_params(int num)
{
    num = 20;
}

void reference_params(int& num)
{
    num = 10;
    int rate = federal_tax_rate;
}

//int rate = 10; - different variable(gloabal)

void const_reference_params(const int& num)
{
    //num = 90;  statement shows that we can protect variable data by using const which means read-only

}

void access_global_variable()
{
   // federal_tax_rate = .5; can't mod if const
    int rate = 1;
   if(true)//same holds for switch, whiile, for
   {
        //federal_tax_rate;
        //int rate = 1;

        rate = 10;
   }

   //rate = 5;
}