/************************************************************************
    filename    : divisible.c
    author      : Raman Bhattarai (THE077BEI033)
    created date: 2021/06/20
    description : This program takes input number from the user using formatted input and checks whether the number is divisible by 10
                  or not.If number is divisible by 10 then it checks whether the number is multiple of 6 or not.If number is not
                  divisible by 10 then it checks if the number is divisible by 4.Then prints info on output screen like
                  "The number 50 is divisible by 10.
                   But the number 50 is not multiple of 6." using formatted output.
************************************************************************/


#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number :");
    scanf("%i",&a);
    if (a%10==0) {                                                      //Checks if the number is divisible by 10.
        printf("The number %i is divisible by 10.\n",a);
        if (a%6==0) {                                                   //Checks if the number is multiple of 6.
            printf("Also, the number %i is multiple of 6.\n",a);
        } else {
            printf("But the number %i is not multiple of 6.\n",a);
        }
    } else {                                                            //Checks if the number is divisible by 4.
        if (a%4==0) {
        printf("The number %i is divisible by 4.\n",a);
        } else {
        printf("The number %i is neither divisible by 10 nor by 4.\n",a);
        }
    }
    return 0;
}
