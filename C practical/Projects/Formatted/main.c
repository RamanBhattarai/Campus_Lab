/************************************************************
    filename     : Formatted.c
    creator      : Raman Bhattarai
    created date : 2021/06/07
    description  : This program takes input from the user by using formatted input only and prints output on the console screen.
************************************************************/


#include <stdio.h>

int main()
{
    int a;
    char g;
    char name[15]="Ram Shah";
    char roll[15]="THA077BEI000";
    float w=50.55;
    printf("Enter your name :");
    scanf("%s",name);

    fseek(stdin,0,SEEK_END);
    printf("Enter your roll no in format %s :",roll);
    scanf("%s",roll);

    printf("Enter your age :");
    scanf("%i",&a);

    printf("Enter your weight :");
    scanf("%f",&w);
    fseek(stdin,0,SEEK_END);
    printf("Enter your gender M/F/O:");
    scanf("%c",&g);
    printf("\n");
    printf("Your roll is %s.\n",roll);
    printf("Your age is %i.\n",a);
    printf("Your weight is %.03f.\n",w);
    printf("Your gender is '%c'.\n",g);
    printf("Your name is %s.\n",name);
    return 0;
}
