/************************************************************
    filename     : DateTime.c
    creator      : Raman Bhattarai
    created date : 2021/06/07
    description  : This program prints Date and Time on the console screen.
************************************************************/


#include <stdio.h>

int main()
{
    int a=2078,s=2,d=27;
    int f=6,g=50,h=8;
    char v[]="PM";
    printf("Date : %02i/%02i/%04i\n",d,s,a);
    printf("Time : %02i\:%02i\:%02i %s\n",f,g,h,v);
    return 0;

}
