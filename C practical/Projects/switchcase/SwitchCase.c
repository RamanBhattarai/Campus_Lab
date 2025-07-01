/************************************************************************
    filename    : Switchcase.c
    author      : Raman Bhattarai (THE077BEI033)
    created date: 2021/06/20
    description : This program takes input number from the user using formatted input and checks whether the number is
                  1 or 2 or 3 or 4 or other.Then prints info on output screen like
                  "The number you entered is 2." using formatted output.
************************************************************************/


#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number :");
    scanf("%i",&a);
    switch (a) {
case 1:                                                 //Checks if the number is 1.
    printf("The number you entered is 1.\n");
    break;
case 2:                                                 //Checks if the number is 2.
    printf("The number you entered is 2.\n");
    break;
case 3:                                                 //Checks if the number is 3.
    printf("The number you entered is 3.\n");
    break;
case 4:                                                 //Checks if the number is 4.
    printf("The number you entered is 4.\n");
    break;
default:
    printf("The number you entered is other than 1,2,3 or 4 and the number is %i.\n",a);
    }
    return 0;
}
