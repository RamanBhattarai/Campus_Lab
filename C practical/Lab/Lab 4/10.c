#include<stdio.h>

int main(){
    int a[10],sum=0;
    int *p=a;
    printf("Enter the 10 elements of array\n");
    for (int i=0;i<10;i++){
        scanf("%i",p+i);
    }
    for (int i=0;i<10;i++){
        sum+=*(p+i);
    }
    printf("\nThe sum of all elements of array is %i\n",sum);
    return 0;
}
