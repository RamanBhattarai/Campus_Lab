#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) x*exp(x)-cos(x)

int main(){
    float x0, x1, x2, f1, f2, f0, E;
    int N, iterations=1;
    printf("Enter the initial guesses x0 and x1: ");
    scanf("%f %f",&x0,&x1);
    printf("Enter the number of iterations: ");
    scanf("%d",&N);
    E = 0.0001;
    f0 = f(x0);
    f1 = f(x1);
    if (f0 == f1){
        printf("\n\tMathematical Error!\n");
        exit(0);
    }
    printf("\n\n________________________________________________________________________\n");
    printf("\n Iterations\tx0\t\tx1\t\tx2\t\tf(x2)\n");
    printf("\n________________________________________________________________________\n");
    do{
        f0 = f(x0);
        f1 = f(x1);
        x2 = x1 - (((x1-x0)*f1) /(f1-f0));
        f2 = f(x2);
        printf(" %d\t\t%f\t%f\t%f\t%f\n",iterations,x0,x1,x2,f2);
        x0 =x1;
        x1 =x2;
        iterations++;
        if (iterations>N){
            printf("\n\t Not Convergent\n");
            exit(0);
        }
    }while(fabs(f2)>E);
    printf("\n________________________________________________________________________\n");
    printf("\n\t The root of given function is %f\n\n",x2);
    return 0;
}
