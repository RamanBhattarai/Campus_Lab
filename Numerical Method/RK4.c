#include <stdio.h>
#include <conio.h>
#include <math.h>

#define f(x,y) sin(x)+cos(x-y);

int main(){
    int n,i;
    float x0,y0,xn,yn,h,k[5];
    printf("\n\tEnter the values of x0, y0, n : ");
    scanf("%f %f %d",&x0,&y0,&n);
    printf("\n\tEnter the value of xn : ");
    scanf("%f",&xn);

    h=(xn-x0)/n;
    printf("\n\tx0\t\ty0\t\tyn\n");
    for(i=0;i<n;i++){
        k[1]=h*f(x0,y0);
        k[2]=h*f((x0+h/2),(y0+k[1]/2));
        k[3]=h*f((x0+h/2),(y0+k[2]/2));
        k[4]=h*f((x0+h),(y0+k[3]));
        k[0]=(k[1]+2*k[2]+2*k[3]+k[4])/6.0;
        yn = y0+k[0];
        printf("\t%f\t%f\t%f\n",x0,y0,yn);
        x0=x0+h;
        y0=yn;
        }
        printf("\n\tThe approximate value of y at x = %f is y = %f\n\n",xn,yn);
        return 0;
}
