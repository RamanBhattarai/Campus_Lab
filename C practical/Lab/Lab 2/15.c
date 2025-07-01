#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float x11,x12,x21,x22;
    printf("Enter the coefficient of a , b and c in (ax^2 + bx + c = 0) :\n");
    scanf("%d %d %d",&a,&b,&c);
    if ((b*b-4*a*c)<0){
        printf("The roots are imaginary.\n");
        x11=(-b)/(2*a);
        x12=sqrt(4*a*c-b*b)/2*a;
        printf("First root \t:  x1 = %.03f - %.03fi\n",x11,x12);
        printf("Second root \t: x2 = %.03f + %.03fi\n",x11,x12);
    } else if ((b*b-4*a*c) == 0){
        printf("The roots are real and equal.\n");
        x21 = -b/(2*a);
        printf("The roots are \t: x1 = x2 = %.03f\n",x21);
    } else {
        printf("The roots are real and unequal.\n");
        x21 = -b/(2*a);
        x22 = sqrt(b*b-4*a*c)/(2*a);
        x11 = x21-x22;
        x12 = x21+x22;
        printf("First root \t: x1 = %.03f\n",x11);
        printf("Second root \t: x2 = %.03f\n",x12);
    }
    return 0;
}
