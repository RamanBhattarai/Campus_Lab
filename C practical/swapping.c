/************************************************************************
    filename    : swapping.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/12
    description : This program asks input number from the user. Then it calls function having argument but no return value
                  where it swaps the number and prints info on output screen like
                  "The number after swapping: a = 10 , b = 45" using formatted output.
************************************************************************/


#include<stdio.h>

void swap(int *a,int *b);

int main(){
    int num1,num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1,&num2);
    printf("Number before swapping:\n");
    printf("a = %d , b = %d\n\n",num1,num2);
    swap(&num1,&num2);          //calls function using passing by reference
    printf("The number after swapping:\n");
    printf("a = %d , b = %d\n\n",num1,num2);
    return 0;
}

void swap(int *a,int *b){
    int c;
    c =*a;       //swaps number
    *a =*b;
    *b =c;
}
