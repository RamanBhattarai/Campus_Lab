/************************************************************************
    filename    : fibonacci.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/12
    description : This program asks input number from the user. Then it calls function with argument but no return value
                  where it creates fibbonacci series of the number of input number and prints info on output screen like
                  "1 1 2 3 5 8"using formatted output.
************************************************************************/


#include<stdio.h>

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;         //returns 1 to function
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));   //calls function in recursion
   }
}

int main() {
   int n;
   printf("Enter the number of terms to print fibbonacci series:\n");
   scanf("%d",&n);
   for(int i = 1;i<=n;i++) {        //loops n times for n fibbonacci series terms
      printf("%d ",fibbonacci(i));
   }
}
