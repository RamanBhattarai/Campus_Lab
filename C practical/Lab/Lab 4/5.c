#include<stdio.h>

int main(){
    float a[8],sum,avg;
    printf("Enter 8 floating numbers:\n");
    for (int i=0;i<8;i++){
        printf("a%i = ",i);
        scanf("%f",&a[i]);
    }
    for (int i=0;i<10;i++){
        sum+=a[i];
    }
    avg=sum/8;
    printf("The sum of elements of array is = %.04f\n",sum);
    printf("The average of elements of array is = %.04f\n",avg);
    return 0;
}
