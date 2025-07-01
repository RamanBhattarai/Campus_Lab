#include <stdio.h>

int main()
{
    int a=19;
    char g='M';
    char name[]="Name";
    char roll[]="THEO77BEI000";
    float w=45.5;
    printf("Enter your name:");
    scanf("%s",name);

    fseek(stdin,0,SEEK_END);
    printf("Enter your Roll no. in format %s :",roll);
    scanf("%s",roll);
    printf("Enter your age:");
    scanf("%d",&a);
    printf("Enter your weight:");
    scanf("%f",&w);

    fseek(stdin,0,SEEK_END);
    printf("Enter your gender 'M'/'F'/'O':");
    scanf("%c",&g);
    printf("\n");
    printf("\n");
    printf("Your name is %s.\n",name);
    printf("Your Roll no. is %s.\n",roll);
    printf("Your age is %d.\n",a);
    printf("Your weight is %.02f.\n",w);
    printf("Your gender is %c.\n",g);
    return 0;
}
