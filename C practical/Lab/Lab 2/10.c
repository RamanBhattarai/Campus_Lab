
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three number:  ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c) {
        printf("The number %d is largest of all.\n",a);
        if (b>c) {
            printf("The number %d is smallest of all.\n",c);
            if (a%2 == 0) {
                printf("The number %d is even.\n",a);
                }else {
                printf("The number %d is odd.\n",a);
                }
            if (c%2 == 0) {
                printf("The number %d is even.\n",c);
                }else {
                printf("The number %d is odd.\n",c);
                }
            } else {
                printf("The number %d is smallest of all.\n",b);
                if (a%2 == 0) {
                printf("The number %d is even.\n",a);
                }else {
                printf("The number %d is odd.\n",a);
            }
            if (b%2 == 0) {
                printf("The number %d is even.\n",b);
                }else {
                printf("The number %d is odd.\n",b);
                }
            }
    }else if (b>a && b>c) {
        printf("The number %d is largest of all.\n",b);
        if (a>c) {
            printf("The number %d is smallest of all.\n",c);
            if (b%2 == 0) {
                printf("The number %d is even.\n",b);
                }else {
                printf("The number %d is odd.\n",b);
                }
            if (c%2 == 0) {
                printf("The number %d is even.\n",c);
                }else {
                printf("The number %d is odd.\n",c);
                }
        } else {
            printf("The number %d is smallest of all.\n",a);
            if (b%2 == 0) {
                printf("The number %d is even.\n",b);
                }else {
                printf("The number %d is odd.\n",b);
                }
            if (a%2 == 0) {
                printf("The number %d is even.\n",a);
                }else {
                printf("The number %d is odd.\n",a);
                }
            }
    }else {
        printf("The number %d is largest of all.\n",c);
        if (a>b) {
            printf("The number %d is smallest of all.\n",b);
            if (c%2 == 0) {
                printf("The number %d is even.\n",c);
                }else {
                printf("The number %d is odd.\n",c);
                }
            if (b%2 == 0) {
                printf("The number %d is even.\n",b);
                }else {
                printf("The number %d is odd.\n",b);
                }
            } else {
            printf("The number %d is smallest of all.\n",a);
                if (c%2 == 0) {
                printf("The number %d is even.\n",c);
                }else {
                printf("The number %d is odd.\n",c);
                }
            if (a%2 == 0) {
                printf("The number %d is even.\n",a);
                }else {
                printf("The number %d is odd.\n",a);
                }
        }
    }
    return 0;
}
