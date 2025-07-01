#include <stdio.h>

int main()
{
    char name[]="Ram Shah";
    char roll[]="THE077BEI000";
    int a=20;
    float w=65.66;
    char g='M';
    printf("Enter your name:");
    gets(name);

    fseek(stdin,0,SEEK_END);
    printf("Enter your age:");
    scanf("%i",&a);

    fseek(stdin,0,SEEK_END);
    printf("Enter your roll in format %s :",roll);
    gets(roll);
    printf("Enter your weight:");
    scanf("%f",&w);

    fseek(stdin,0,SEEK_END);
    printf("Enter your gender 'M'/'F'/'O' :");
    g=getchar();
    putch(10);
    printf("Your name is ");
    puts(name);
    printf("Your age is %i.\n",a);
    printf("Your roll no is ");
    puts(roll);
    printf("Your weight is %.03f.\n",w);
    printf("Your gender is ");
    putchar(g);
    return 0;
}
