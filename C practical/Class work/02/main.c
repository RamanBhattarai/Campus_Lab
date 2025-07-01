#include <stdio.h>
#include <conio.h>
int main ()
{
    char c = 'A';
    char name [10] = "Ram Shah";
    printf("Value before input:\n");
    printf("c=%c, name=%s\n", c, name);

    printf("Enter value for c:");
    c = getch();
    printf("You entered %c for c.\n", c);

    printf("Enter value for c:");
    c = getche();
    printf("You entered %c for c.\n", c);

    printf("Enter value for c:");
    c = getchar();
    printf("You entered %c for c.\n", c);

    fseek(stdin, 0, SEEK_END);

    printf("Enter the value for name:");
    gets(name);
    printf("You entered %s for name.\n", name);

    printf("Enter the value for name with space:");
    gets(name);
    printf("You entered %s for name.\n", name);

    return 0;
}
