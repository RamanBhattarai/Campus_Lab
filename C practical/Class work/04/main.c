#include <stdio.h>

int main()
{
    char c='A';
    int a=10, b=0x0A;
    float p=10.2325;
    char name[10]="Ram Shah";
    printf("\'A\' in Character is %c.\n",c);
    printf("'A\' in Number is %d.\n",c);
    printf("\'A\' in Hex Number is %X.\n",c);
    printf("10 in Decimal is %d.\n",a);
    printf("10 in Octal is %o.\n",a);
    printf("10 in Hexadecimal is %x.\n",a);
    printf("10 in Hexadecimal is %X.\n",a);
    printf("0A in Integer is %i.\n",b);
    printf("0A in Decimal is %i.\n",b);
    printf("0A in Hexadecimal is %x.\n",b);
    printf("0A in Hexadecimal is %X.\n",b);
    printf("10.2325 is %f\n",p);
    printf("10.2325 is %.2f\n",p);
    printf("10.2325 is %.8f\n",p);
    printf("10.2325 is %06.2f\n",p);
    printf("\"Ram Shah\" in string is %s.\n",name);
    printf("c=%c, a=%d, b=%X, p=%E, name=%s.\n",c,a,b,p,name);
    return 0;
}
