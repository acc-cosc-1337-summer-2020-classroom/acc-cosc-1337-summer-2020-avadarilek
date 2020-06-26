#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dna)
{
    double GC_count{0};

    for(char nucleotide: dna)
    {
        if(nucleotide =='G' || nucleotide == 'C')
        {
            GC_count++;
        }
    }

    return GC_count / dna.size();
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
    string reverse;
    for(size_t i=dna.length(); i>0; --i)
    {
        reverse.push_back(dna[i-1]);
    }
    return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
    string complement = get_reverse_string(dna);


    for(size_t i=complement.length(); i> 0; --i)
    {
        switch(complement[i-1])
        {
            case 'A':
                complement[i-1] = 'T';
                break;
            case 'T':
                complement[i-1] = 'A';
                break;
            case 'C':
                complement[i-1] = 'G';
                break;
            case 'G':
                complement[i-1] = 'C';
                break;
        }
    }
    return complement;
}

