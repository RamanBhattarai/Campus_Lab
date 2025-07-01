#include<stdio.h>

int main(){
    float a[10]={1.023,2.03};
    printf("Enter 10 floating numbers:\n");
    for (int i=0;i<10;i++){
        printf("a%i = ",i);
        scanf("%f",&a[i]);
    }
    printf("The 10 float numbers are:\n");
    for (int i=0;i<10;i++){
        printf("a%i = %.06f\n",i,a[i]);
    }
    return 0;
}
