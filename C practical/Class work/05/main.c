#include <stdio.h>

int main()
{
    char c='A';
    int a=10;
    float b=10.05;
    char name[10]="Ram Shah";

    printf("c=%c.\n",c);
    printf("a=%d.\n",a);
    printf("b=%f.\n",b);
    printf("b=%.3f.\n",b);
    printf("name=%s.\n",name);

    printf("After user input:\n");

    printf("Input the character value for c.\n");
    scanf("%c", &c);
    printf("You entered %c for c.\n",c);

    printf("Input the integer value for a.\n");
    scanf("%d", &a);
    printf("You entered %d for a.\n",a);

    printf("Input the Hex integer value for a.\n");
    scanf("%i", &a);
    printf("You entered %d for a.\n",a);

    printf("Input the Hex integer value for a.\n");
    scanf("%X", &a);
    printf("You entered %d for a.\n",a);

    printf("Input the float value for b.\n");
    scanf("%f", &b);
    printf("You entered %f for b.\n",b);
    printf("You entered %.2f for b.\n",b);

    printf("Input the string value for name.\n");
    scanf("%s", name);
    printf("You entered %s for name.\n",name);

    printf("Input the string value with space for name.\n");
    scanf("%s", name);
    printf("You entered %s for name.\n",name);

    return 0;
}
