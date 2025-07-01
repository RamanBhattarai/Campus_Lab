/************************************************************************
    filename    : whileloop.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/06/27
    description : This program prints only odd roll no. of the first 20 roll numbered students and shows info on output screen like
                  "THA077BEI001
                   ................
                   THA077BEI019" using formatted output.
************************************************************************/


#include <stdio.h>

int main()
{
    int i=0;
    printf("\nOdd roll no. of first 20 roll numbered students:\n");
    while(i<20){                                     //Loops until i>20.
        i++;
        if (i%2==0) continue;                        //Skips even roll no. and goes to starting line of loop.
        printf("\tTHA077BEI%03i\n",i);
    }
    return 0;
}
