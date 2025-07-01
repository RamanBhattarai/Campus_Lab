/*Simpson's 1/3 rule*/

#include <stdio.h>
#include <math.h>
#define f(x) atan(x)/x

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
    printf("\n\t\tSimpson's 1/3 rule\n\n");
    printf("\n\tf(x) = atan(x)/x\n\n");
    printf("\n\tEnter the values of x0,xn,n : ");
    scanf("%f%f%d",&x0,&xn,&n);
    /*Compute*/
    h = (xn-x0)/n;
    I = f(x0)+f(xn);
    /*Apply Simpson's* 1/3 rule*/
    for(i = 1; i<= n-1;i++){
        k = x0 + i*h;
        if(i%2==0){
            I=I+2*f(k);
        }
        else{
            I=I+4*f(k);
        }
    }
    I=I*h/3.0;
    printf("\n\n\tThe approximate value of integral is I = %0.6f\n\n",I);
    return 0;
}
