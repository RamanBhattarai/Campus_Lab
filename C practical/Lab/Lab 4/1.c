#include<stdio.h>

void sort_array(int sort[10]){
    int a;
    for (int i=0;i<10;i++){
        for (int j=i+1;j<10;j++){
            if (sort[i]>sort[j]){
                a=sort[i];
                sort[i]=sort[j];
                sort[j]=a;
            }
        }
    }
    printf("The numbers in ascending order is:\n");
    for (int i=0;i<10;i++){
        printf("%i ",sort[i]);
    }
}


int main(){
    int a[10]={1,2,3};
    int pos=0,neg=0;
    printf("Enter the 10 element of array positive or negative:\n");
    for (int i=0;i<10;i++){
        printf("a%i = ",i);
        scanf("%i",&a[i]);
    }
    for (int i=0;i<10;i++){
        if (a[i]<0){
            neg+=a[i];
        }else{
            pos+=a[i];
        }
    }
    printf("The sum of positive numbers in array is = %i\n",pos);
    printf("The sum of negative numbers in array is = %i\n",neg);
    sort_array(a);
}
