//write include statement for decisions header
#include "decisions.h"

using std::string; using std::cout; using std::cin;

//Write code for function(s) code here

int get_letter_grade_using_if(int num)
{
   char letter_grade = ' ';

   if(num >= 90 && num <= 100)
   {
    letter_grade = 'A';
   }
   else if (num >= 80 && num <= 90)
   {
    letter_grade = 'B';
   }
   else if (num >= 70 && num <= 80)
   {
    letter_grade = 'C';
   }
   else if (num >= 60 && num <= 70)
   {
    letter_grade = 'D';
   }
   else if (num >= 0 && num <= 60)
   {
    letter_grade = 'F';
   }
   else
   {
    letter_grade = 'n';
   }

   return letter_grade;
}

int get_letter_grade_using_switch(int num)
{
    char letter_grade_switch = ' ';
    switch(num)
    {
        case 90 ... 100:
            letter_grade_switch = 'A';
            break;
        case 80 ... 89:
            letter_grade_switch = 'B';
            break;
        case 70 ... 79:
            letter_grade_switch = 'C';
            break;
        case 60 ... 69:
            letter_grade_switch = 'D';
            break;
        case 0 ... 59:
            letter_grade_switch = 'F';
            break;
        default:
            letter_grade_switch = 'N';
            break;

    }

    return letter_grade_switch;
}
