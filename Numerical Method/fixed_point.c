#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) x-exp(-x)
#define g(x) exp(-x)

int main(){
    float x0, x1, f1,E;
    int N, iterations=1;
    printf("Enter the initial guesses x0: ");
    scanf("%f",&x0);
    printf("Enter the number of iterations: ");
    scanf("%d",&N);
    E = 0.0001;
    printf("\n\n________________________________________________________________________\n");
    printf("\n Iterations\tx0\t\tx1\t\tf(x1)\n");
    printf("\n________________________________________________________________________\n");
    do{
        x1 = g(x0);
        f1 = f(x1);
        printf(" %d\t\t%f\t%f\t%f\n",iterations,x0,x1,f1);
        iterations++;
        x0 = x1;
        if (iterations>N){
            printf("\n\t Not Convergent\n");
            exit(0);
        }
    }while(fabs(f1)>E);
    printf("\n________________________________________________________________________\n");
    printf("\n\t The root of given function is %f\n\n",x1);
    return 0;
}


