#include <stdio.h>
#include <math.h>

#define f(x,y) sin(x)+cos(x+y)

int main(){

int n,i;
float x0,xn,y0,yn,k[5],h;

printf("\n\tEnter the value of x0 , y0 , n : ");
scanf("%f %f %d",&x0,&y0,&n);
printf("\n\tEnter the value of xn : ");
scanf("%f",&xn);

h=(xn-x0)/n;
printf("\n\tx0\t\ty0\t\tyn\n");

for(i=0;i<n;i++){
k[1]=h*(f(x0,y0));
k[2]=h*(f((x0+h/2),(y0+k[1]/2)));
k[3]=h*(f((x0+h/2),(y0+k[2]/2)));
k[4]=h*(f((x0+h),(y0+k[3])));

k=(k[1]+2*k[2]+2*k[3]+k[4])/6.0;
yn=y0+k;

printff("\t%f\t%f\t%f\n",x0,y0,yn);
x0+=h;
y0=yn;
}

printf("\n\n\tThe approximate value of y at x = %f is y = %f",xn,yn);
return 0;
}
