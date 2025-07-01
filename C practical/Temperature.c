/************************************************************************
    filename    : temperature.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/12
    description : This program takes formatted input from the user as centigrade temperature. Then it calls function having argument
                  and return value where it converts the temperature in fahrenheit and prints the info on output screen like
                  "The temperature in celsius at 0 converted to fahrenheit is: 32" using formatted output.
************************************************************************/


#include<stdio.h>

float temp(float a);

int main(){
    float centigrade, fahrenheit;
    printf("Enter the temperature in centigrade:");
    scanf("%f",&centigrade);
    fahrenheit = temp(centigrade);       //calls function
    printf("The temperature in celsius at %.02f converted to fahrenheit is:%.02f\n\n",centigrade, fahrenheit);
    return 0;
}

float temp(float a){
    float b;
    b = (a * 1.8) + 32;        //converts temperature at ccentigrade to fahrenheit
    return b;
}

