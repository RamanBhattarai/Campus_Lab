/************************************************************************
    filename    : Positivenum.c
    author      : Raman Bhattarai (THE077BEI033)
    created date: 2021/06/20
    description : This program takes input number from the user using formatted input and checks whether the number is positive or not.
                  Then prints info on output screen like "The number 5 is positive." using formatted output.
************************************************************************/


#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number :",a);
    scanf("%i",&a);
    if (a>0) {                                                  //Checks whether the number is positive or not.
            printf("The number %i is positive.\n",a);
    } else {
            printf("The number %i is not positive.\n",a);
    }
    return 0;
}
