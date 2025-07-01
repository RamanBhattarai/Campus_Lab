/************************************************************************
    filename    : LessorGreater.c
    author      : Raman Bhattarai (THE077BEI033)
    created date: 2021/06/20
    description : This program takes input number from the user using formatted input and checks whether the number is
                  "less than 10" or "greater or equal to 10 and less than 20" or "greater or equal to 20 and less than 30" Or
                  "greater or equal to 30 and less than 40" or "greater than 40".
                  Then prints info on output screen like
                  "The number 25 is greater than or equal to 20 and less than 30."
                  using formatted output.
************************************************************************/


#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number :");
    scanf("%i",&a);
    if (a<10) {                                               //Checks if the number is less than 10.
        printf("The number %i is less than 10.\n",a);
    } else if (a>=10 && a<=20){                               //Checks if the number is greater than or equal to 10 and less than 20.
        printf("The number %i is greater than or equal to 10 and less than 20.\n",a);
    } else if (a>=20 && a<=30) {                              //Checks if the number is greater than or equal to 20 and less than 30.
        printf("The number %i is greater than or equal to 20 and less than 30.\n",a);
    } else if (a>=30 && a<=40) {                              //Checks if the number is greater than or equal to 30 and less than 40.
        printf("The number %i is greater than or equal to 30 and less than 40.\n",a);
    } else {printf("The number %i is greater than or equal to 40.\n",a);
    }
    return 0;
}
