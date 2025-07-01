/*Simpson's 3/8 rule*/

#include <stdio.h>
#include <math.h>
#define f(x) sin(x)/x

/*
n=no of sub interval
x0 = lower limit
xn = upper limit
I = approximate integral
h = subinterval length
*/

int main()
{
    int i,n;
    float x0,xn,I=0,h,k;
    /*Input*/

    printf("\n\t\t Simpson's 3/8 rule\n");
    printf("\n\tf(x) sin(x)/x\n\n");
    printf("\tEnter the values of x0,xn,n : ");
    scanf("%f%f%d",&x0,&xn,&n);
    /*Compute*/
    h = (xn-x0)/n;
    I = f(x0)+f(xn);
    /*Apply Simpson's* 3/8 rule*/
    for(i = 1; i<= n-1;i++){
        k = x0 + i*h;
        if(i%3==0){
            I=I+2*f(k);
        }
        else{
            I=I+3*f(k);
        }
    }
    I=I*3*h/8.0;
    printf("\n\n\tThe approximate value of integral is I = %0.6f\n\n",I);
    return 0;
}
