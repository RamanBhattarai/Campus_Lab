#include<stdio.h>

void sum_positive(int *a){
    int sum=0;
    for (int i=0;i<10;i++){
        if (*(a+i)>0){
            sum+=*(a+i);
        }
    }
    printf("The sum of positive numbers in array is = %i\n",sum);
}

void sum_negative(int *a){
    int sum=0;
    for (int i=0;i<10;i++){
        if (*(a+i)<0){
            sum+=*(a+i);
        }
    }
    printf("The sum of negative numbers in array is = %i\n",sum);
}

void sort_array(int *a){
    int b;
    for (int i=0;i<10;i++){
        for (int j=i+1;j<10;j++){
            if (*(a+i)>*(a+j)){
                b=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=b;
            }
        }
    }
    printf("The numbers of array in ascending order is:\n");
    for (int i=0;i<10;i++){
        printf("%i ",*(a+i));
    }
}

int main(){
    int arr[10];
    printf("Enter the 10 elements of array :\n");
    for (int i=0;i<10;i++){
        printf("a%i = ",i);
        scanf("%i",arr+i);
    }
    sum_positive(arr);
    sum_negative(arr);
    sort_array(arr);
    return 0;
}
