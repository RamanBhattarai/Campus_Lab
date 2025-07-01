#include<stdio.h>

int main(){
    float a,b,operation;
    char operator='A';
    printf("Enter two float values:\n");
    scanf("%f %f",&a,&b);
    fseek(stdin,0,SEEK_END);
    printf("Enter the operation you want to perform (+, -, *, /):\n");
    operator = getchar();
    fseek(stdin,0,SEEK_END);
    switch (operator){
    case '+':
        operation = a + b;
        printf("The sum of two number is: %.04f + %.04f = %.04f\n",a,b,operation);
        break;
    case '-':
        operation= a - b;
        printf("The difference of two number is : %.04f - %.04f = %.04f\n",a,b,operation);
        break;
    case '*':
        operation = a * b;
        printf("The multiplication of two number is : %.04f * %.04f = %.04f\n",a,b,operation);
        break;
    case '/':
        operation = a / b;
        printf("The division of two number is : %.04f / %.04f = %.04f\n",a,b,operation);
        break;
    default :
        printf("The operator inputted is not in option.\n");
    }
    return 0;
}
