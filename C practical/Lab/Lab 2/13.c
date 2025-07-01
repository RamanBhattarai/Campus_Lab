#include<stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a%5 == 0){
        printf("The number %d is multiple of 5.\n",a);
    } else {
        printf("The number %d is not multiple of 5.\n",a);
    }
    if (a%7 == 0){
        if (a%11 != 0){
            printf("The number %d is multiple of 7 but not of 11.\n");
        } else {
            printf("The number %d is multiple of 7 and 11.\n");
        }
    } else {
        if (a%11 != 0){
            printf("The number %d is neither a multiple of 7 nor of 11.\n");
        } else {
            printf("The number %d is not a multiple of 7 but is multiple of 11.\n");
        }
    }
    return 0;
}

