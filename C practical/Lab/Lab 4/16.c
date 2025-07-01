#include<stdio.h>
#include<string.h>

int main(){
    char a[20];
    char b[20];
    printf("Enter two strings.\n");
    gets(a);
    fseek(stdin,0,SEEK_END);
    gets(b);
    int s=strcmp(a,b);
    if (s==0){
        printf("\nstring1 = %s is equal to string2 = %s.\n",a,b);
    } else if(s<0){
        printf("\nstring1= %s is lesser than string2 = %s.\n",a,b);
    } else{
        printf("\nstring1 = %s is greater than string2 = %s.\n",a,b);
    }
    return 0;
}
