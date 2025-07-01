#include<stdio.h>
#include<string.h>

int main(){
    char a[30],b[15];
    printf("Enter a string.\n");
    scanf("%s",a);
    printf("Enter string to concatenate.\n");
    scanf("%s",b);
    strcat(a,b);
    printf("\nAfter Concatenatning string.\n");
    printf("%s",a);
    return 0;
}
