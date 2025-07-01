/************************************************************************
    filename    : prime.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/12
    description : This program asks input number from the user. Then it calls function with argument and return value
                  where it checks whether the input number is prime or not and prints info on output screen like
                  "5 is prime number."using formatted output.
************************************************************************/


#include<stdio.h>

void prime(int);

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    prime(number);         //calls function
    return 0;
}

void prime(int a){
    int c=1;
    for (int i=2;i<a;i++) {     //loops to find prime numbers
        if (a%i==0){
            c=0;
        }
    }
    if (c ==1){
        printf("%d is prime number.\n",a);
    } else {
        printf("%d is not prime number.\n",a);
    }
}
