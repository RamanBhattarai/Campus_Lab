#include<stdio.h>

int main(){
    float x, y, z, a, b, c;
    x=3.0;
    y=12.5;
    z= 523.3;
    a=300.0;
    b=1200.5;
    c=5300.3;
    printf("x \t y \t z \t = \t |%.01f \t |%.01f \t |%.01f\n",x,y,z);
    printf("A \t B \t C \t = \t |%.01f  |%.01f |%.01f\n",a,b,c);
    printf("------------------------------------------------------------------------\n");
    printf("x \t y \t z \t = \t |\t%.02f|\t%.02f|\t%.02f\n",x,y,z);
    printf("A \t B \t C \t = \t |    %.02f| %.02f| %.02f\n",a,b,c);
    return 0;
}
