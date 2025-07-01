#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%i %i",&a,&b);
    printf("\nThe values before swapping\n");
    printf("a = %i  b = %i \n",a,b);
    int *c=&a;
    int *d=&b;
    int temp=*c;
    *c=*d;
    *d=temp;
    printf("\nThe values after swapping\n");
    printf("a = %i  b = %i \n",a,b);
    return 0;
}
