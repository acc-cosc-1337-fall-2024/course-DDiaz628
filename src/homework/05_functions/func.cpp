//add include statements
#include "func.h"


//add function code here
double get_gc_content(const string& dna)
{
    double sum = 0;
    double result;

    
    
    for(int i = 0; i < dna.size(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            sum += 1;
        }

        else if(dna[i] == 'A' || dna[i] == 'T')
        {
            sum += 0;
        }

        else
        {
            return -1;
        }

    }

    result = sum / dna.size();

    return result;

}

string get_dna_complement(string dna)
{
    string rev_dna = reverse_string(dna);

    int num = 0;

    while(num < rev_dna.size())
    {
        if (rev_dna[num] == 'A')
        {
            rev_dna[num] = 'T';
        }

        else if (rev_dna[num] == 'T')
        {
            rev_dna[num] = 'A';
        }

        else if (rev_dna[num] == 'C')
        {
            rev_dna[num] = 'G';
        }

        else if (rev_dna[num] == 'G')
        {
            rev_dna[num] = 'C';
        }

        else
        {
            return "0";
        }

        num++;
    }

    return rev_dna;
}

string reverse_string(string dna)
{
    int num = dna.size() - 1;
    string rev_dna = "";

    do
    {
        rev_dna += dna[num];
        num--;
    } while (num >= 0);
    

    return rev_dna;
}