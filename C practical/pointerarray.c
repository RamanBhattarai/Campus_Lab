/************************************************************************
    filename    : pointerarray.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/26
    description : This program creates array to store price of item and pointer to point the address of array. It then
                  asks input for price of 10 items from the user. It then uses pointer to store price of items in array.
                  It then prints the price of items on the output screen like
                  "Item   Price
                   1      20
                   2      30" on output screen using formatted output.
************************************************************************/



#include<stdio.h>

int main(){
    float prices[10];           //declares array to store price
    float *p=prices;            //initializes pointer to store address of array
    for(int i=0;i<10;i++){
    printf("Enter the price of item %i: ",i+1);
    scanf("%f",(p+i));          //takes input for price from user
    }
    printf("Item\t Price\n");
    for(int i=0;i<10;i++){
    printf("%i \t%.02f\n",i+1,*(p+i));      //prints the price of items
    }
    return 0;
}
