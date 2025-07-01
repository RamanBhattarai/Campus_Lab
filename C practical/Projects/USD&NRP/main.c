#include <stdio.h>

int main()
{
    float a,c,d,b;
    printf("Enter the price of mangoes per kg in USD :");
    scanf("%f",&a);
    printf("Enter the price of note copy in Rs :");
    scanf("%f",&b);
    c=a*106;
    d=b/106;
    printf("\n");
    printf("The price of mangoes in USD is $%.02f.\n",a);
    printf("The price of mangoes in NRP is Rs.%.02f.\n",c);
    printf("The price of note copy in USD is $%.02f.\n",d);
    printf("The price of note copy in NRP is Rs.%.02f.\n",b);
    return 0;
}

