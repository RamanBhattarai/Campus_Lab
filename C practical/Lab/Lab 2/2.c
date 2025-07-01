#include<stdio.h>

#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /

int main(){
    float x,y,z;
    printf("Enter two float numbers:\n");
    scanf("%f %f",&x,&y);
    z = 0;
    z = x PLUS y;
    printf("z = x PLUS y = %.04f\n",z);
    z = 0;
    z = x MINUS y;
    printf("z = x MINUS y = %.04f\n",z);
    z = 0;
    z = x MULT y;
    printf("z = x MULT y = %.04f\n",z);
    z = 0;
    z = x DIVIDE y;
    printf("z = x DIVIDE y = %.04f\n",z);
    return 0;
}
