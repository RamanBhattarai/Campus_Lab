/************************************************************
    filename     : FormattedUnforamtted.c
    creator      : Raman Bhattarai
    created date : 2021/06/07
    description  : This program takes input from the user by using both formatted and unformatted input and
                   prints output on the console screen.
************************************************************/


#include <stdio.h>

int main()
{
    char name[]="Ramesh Manandhar";
    char roll[]="THA077BEI000";
    int a=20;
    float w=65.66;
    char r='M';

    printf("Enter your name with space:");
    gets(name);
    fseek(stdin,0,SEEK_END);
    printf("Enter your age:");
    scanf("%i",&a);
    fseek(stdin,0,SEEK_END);
    printf("Enter your roll in format %s :",roll);
    gets(roll);
    fseek(stdin,0,SEEK_END);
    printf("Enter your weight:");
    scanf("%f",&w);
    fseek(stdin,0,SEEK_END);
    printf("Enter your gender 'M'/'F'/'O' :");
    r=getchar();

    putch(10);
    printf("Your name is ");
    puts(name);
    printf("Your age is %i\n",a);
    printf("Your roll no is ");
    puts(roll);
    printf("Your weight is %.03f\n",w);
    printf("Your gender is ");
    putchar(r);
    return 0;
}
