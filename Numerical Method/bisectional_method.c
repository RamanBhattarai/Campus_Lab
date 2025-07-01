#include <stdio.h>
#include <math.h>

#define f(x) 4*exp(-x)*sin(x)-1

int main(){
    float x0, x1, x2, f0, f1, f2;
    float Error = 0.00001;
    int a = 1, count = 1;
    while(a == 1){
        printf("Enter initial guesses x0 and x1: ");
        scanf("%f %f", &x0, &x1);
        f0 = f(x0);
        f1 = f(x1);
        if ( ( f0 * f1 ) > 0 ){
            printf("\nWrong initial guesses!   Try again!\n\n");
        }else{
            a = 2;
        }
    }
    printf("\n\n Step\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\t\tx2\t\tf(x2)\n");
    do{
        x2 = (x0 + x1) / 2;
        f0 = f(x0);
        f1 = f(x1);
        f2 = f(x2);
        printf(" %d\t\t%f\t%f\t%f\t%f\t%f\t%f\n",count,x0,f0,x1,f1,x2,f2);
        if ( ( f0 * f2 ) < 0 ){
            x1 = x2;
        }else{
            x0 = x2;
        }
        if (f2 == 0){
            printf("\n\nThe root of given function is %f\n\n", x2);
            exit(1);
        }
        count++;
    }while( fabs(f2) > Error );
    printf("\n\nThe root of given function is %f\n\n", x2);
    return 0;
}
