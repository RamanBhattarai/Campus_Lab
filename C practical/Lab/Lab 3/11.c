#include<stdio.h>

void fibo(int a,int b,int d){
    int c;
    if (d>=1){
        c=a+b;
        printf("%i ",c);
        fibo(b,c,d-1);
    }
}

int main(){
    int a;
    printf("Enter the number of fibonacci number you want:");
    scanf("%i",&a);
    printf("\n1 1 ");
    fibo(1,1,a-2);
    printf("\n\n");
    return 0;
}
