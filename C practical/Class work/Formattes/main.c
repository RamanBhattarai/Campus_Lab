#include <stdio.h>

int main()
{
    int a;
    char g;
    char name[15]="Ram Shah";
    char roll[15]="THE077BEI000";
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
    printf("Your name is %s.\n",name);
    printf("Your roll is %s.\n",roll);
    printf("Your age is %i.\n",a);
    printf("Your weight is %.03f.\n",w);
    printf("Your gender is '%c'.\n",g);
    return 0;
}
