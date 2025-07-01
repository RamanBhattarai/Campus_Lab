/************************************************************************
    filename    : Lessthan.c
    author      : Raman Bhattarai (THE077BEI033)
    created date: 2021/06/20
    description : This program takes input number from the user using formatted input and checks whether the number is
                  "less than 10" or "less than 20" or "less than 30" or "less than 40".
                  Then prints info on output screen like
                  "The number 25 is less than 30.
                   The number 25 is less than 40."
                  using formatted output.
************************************************************************/


#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number within 40 :");
    scanf("%i",&a);
    if (a<10) {                                                 //Checks if the number is less than 10.
        printf("The number %i is less than 10.\n",a);
    }
    if (a<20) {                                                 //Checks if the number is less than 20.
        printf("The number %i is less than 20.\n",a);
    }
    if (a<30) {                                                 //Checks if the number is less than 30.
        printf("The number %i is less than 30.\n",a);
    }
    if (a<40) {                                                 //Checks if the number is less than 40.
        printf("The number %i is less than 40.\n",a);
    } else {
        printf("The number %i is above the limit value",a);
    }
    return 0;
}
