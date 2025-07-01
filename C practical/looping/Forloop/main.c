/************************************************************************
    filename    : forloop.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/06/27
    description : This program prints roll no. of first 10 students and shows output on screen like
                  "THA077BEI001
                   ...............
                   THA077BEI010" using formatted output.
************************************************************************/


#include <stdio.h>

int main()
{
    int i=0;
    printf("\nThe roll no. of first 10 students is:\n");
    for (i=1;i<=10;i++){                                //Loops 10 times to print roll no.
        printf("\tTHA077BEI%03i\n",i);
    }
    return 0;
}
