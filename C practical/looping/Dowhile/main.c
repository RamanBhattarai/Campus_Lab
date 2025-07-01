/************************************************************************
    filename    : dowhile.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/06/27
    description : This program prints roll no. of last 10 students, only those which are not more than 40 or 80 and prints info
                  on output screen like
                  "THA077BEI039" using formatted output.
************************************************************************/


#include <stdio.h>

int main()
{
    printf("\nRoll no. of last 10 students not greater than 40 or 80:\n");
    int i=39;
    do{                                                   //loops 10 times.
        printf("\tTHA077BEI%03i\n",i);
        i+=1;
        if (i>40 || i>80) break;                          //if i>40 ends the loop.
    }while(i<48);
    return 0;
}
