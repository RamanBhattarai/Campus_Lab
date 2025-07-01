#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define f(x) x * log10(x) - 1.2
#define df(x) log10(x) + (1 / log(10))

int main(){
    float x0, x1, f0, f1, df0, E;
    int N, step = 1;
    printf("Enter initial guess value: ");
    scanf("%f", &x0);
    printf("Enter tolerable error: ");
    scanf("%f", &E);
    printf("Enter number of iterations: ");
    scanf("%d", &N);
    printf("\nStep\t\tx0\t\t\tf(x0)\t\t\tdf(x0)\t\t\tx1\t\t\tf(x1)\n");
    do{
        if (df(x0) == 0){
            printf("\nMathematical Error...\n");
            exit(1);
        }
        f0 = f(x0);
        df0 = df(x0);
        x1 = x0 - (f0 / df0);
        f1 = f(x1);
        printf("%d\t\t%f\t\t%f\t\t%f\t\t%f\t\t%f\n", step, x0, f0, df0, x1, f1);
        x0 = x1;
        step++;
        if (step > N){
            printf("\nNot convergent...\n");
            exit(1);
        }
    }while( fabs(f1) > E );
    printf("\nThe root of given function is %f.\n", x1);
    return 0;
}
