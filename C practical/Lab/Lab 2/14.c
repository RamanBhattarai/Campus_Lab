#include<stdio.h>

int main(){
    int a;
    printf("Enter the year: ");
    scanf("%d",&a);
    if ((a%4 == 0 && a%100 != 0) || (a%100 == 0)){
        printf("Year %d is leap year.\n",a);
        } else {
        printf("Year %d is not leap year",a);
    }
    return 0;
}

