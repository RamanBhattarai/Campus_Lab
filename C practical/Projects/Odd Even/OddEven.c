/************************************************************************
    filename    : OddEven.c
    author      : Raman Bhattarai (THE077BEI033)
    created date: 2021/06/20
    description : This program takes input number from the user using formatted input and checks whether the number is odd or even.
                  Then prints info on output screen like "The number 7 is odd." using formatted output.
************************************************************************/


#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number :");
    scanf("%i",&a);
    if (a%2==0) {                                           //Checks if the number is odd or even.
            printf("The number %i is even.\n",a);
    }
    else {
            printf("The number %i is odd.\n",a);
    }
    return 0;
}

