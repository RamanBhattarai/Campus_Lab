#include<stdio.h>

#define PI 3.1415
#define a 8
#define b 4
#define mult(a,b) a*b
#define sum(a,b) a+b
#define sub(a,b) a-b
#define div(a,b) a/b

int main(){
    float c=0;
    c= PI * mult(a,b);
    printf("c= PI * mult(a,b) = %.04f\n",c);
    c= PI * sum(a,b);
    printf("c= PI * sum(a,b) = %.04f\n",c);
    c= PI * sub(a,b);
    printf("c= PI * sub(a,b) = %.04f\n",c);
    c= PI * div(a,b);
    printf("c= PI * div(a,b) = %.04f\n",c);
    return 0;
}
