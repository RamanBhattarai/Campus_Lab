#include<stdio.h>

int main(){
    int a,b,i,j;
    b=j=0;
    printf("Enter a two or more digit number:  ");
    scanf("%d",&a);
    i=a;
    while (i>0){
    j=i%10;
    b=b*10+j;
    i=i/10;
    }
    printf("The reverse order of number %d is %d .\n",a,b);
    return 0;
}
