#include <stdio.h>
//Program to print student's info.

int main()
{
    char name[]="Ramesh Manandhar";
    int a=19;
    float w=50.2;
    char g='M';
    char roll[]="THA077BEI000";

    printf("Your name:");
    gets(name);
    fseek(stdin,0,SEEK_END);
    printf("Your roll in format %s :",roll);
    scanf("%s",roll);
    fseek(stdin,0,SEEK_END);
    printf("Your weight :");
    scanf("%f",&w);
    printf("Your age :");
    scanf("%i",&a);
    fseek(stdin,0,SEEK_END);
    printf("Your gender :");
    g=getchar();
    fseek(stdin,0,SEEK_END);

    printf("Your name is ");
    puts(name);
    printf("Your roll is %s\n",roll);
    printf("Your age is %i\n",a);
    printf("Your weight is %.03f\n",w);
    printf("Your gender is %c",g);
    putch(10);
    return 0;

}
