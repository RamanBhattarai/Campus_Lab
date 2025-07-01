/************************************************************************
    filename    : sum.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/12
    description : This program asks input number from the user. the it calls function having argument and return value where
                  it calculates the sum of natural number from 1 to the input number using recursive function and then it prints
                  info on output screen like
                  "The sum of numbers from 1 to 5 is: 15" using formatted output.
************************************************************************/


#include<stdio.h>

int adding(int a){
    if (a==1){
        return 1;
        }else{
            return a+adding(a-1);  //using recursion to calculate sum
        }
}

int main(){
    int num, sum;
    printf("Enter a number:");
    scanf("%d", &num);
    sum = adding(num);   //calls function
    printf("The sum of numbers from 1 to %d is: %d",num,sum);
    return 0;
}

