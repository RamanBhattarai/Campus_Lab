#include<stdio.h>

int main(){
    float a[10],n;
    printf("Enter 10 floating numbers:\n");
    for (int i=0;i<10;i++){
        printf("a%i = ",i);
        scanf("%f",&a[i]);
    }
    for (int i=0;i<10;i++){
        for (int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                n=a[i];
                a[i]=a[j];
                a[j]=n;
            }
        }
    }
    printf("The greatest element in the array is = %f\n",a[9]);
    printf("The smallest element in the array is = %f\n",a[0]);
    return 0;
}
