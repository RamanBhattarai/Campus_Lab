#include <stdio.h>

int main()
{
    char name[15]="Hari Shah";
    char roll[15]="THE077BEI000";
    int a=20;
    float w=55.59;
    char g='M';
    printf("Enter your name :");
    gets(name);

    fseek(stdin,0,SEEK_END);
    printf("Enter your roll no. in format %s :",roll);
    gets(roll);

    fseek(stdin,0,SEEK_END);
    printf("Enter your age :");
    a=getchar();

    printf("Enter your weight :");
    w=getchar();
    printf("Enter your gender M/F/O :");
    g=getchar();
    putch(10);
    printf("Your name is %s.\n",name);
    printf("Your roll is %s.\n",roll);
    printf("Your age is %i.\n",a);
    printf("Your weight is %.03f Kg.\n",w);
    printf("Your gender is %c.\n",g);
    return 0;
}
